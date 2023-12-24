#include <iostream>
#include <cmath>

class TemperatureSimulator {
private:
    double a_linear, b_linear;
    double a_nonlinear, b_nonlinear, c_nonlinear, d_nonlinear;
    double y_linear, y_nonlinear, y_prev_nonlinear;

public:
    TemperatureSimulator(double a_linear_val, double b_linear_val, double a_nonlinear_val, double b_nonlinear_val, double c_nonlinear_val, double d_nonlinear_val)    //присвоить значение
        : a_linear(a_linear_val), b_linear(b_linear_val), a_nonlinear(a_nonlinear_val), b_nonlinear(b_nonlinear_val), c_nonlinear(c_nonlinear_val), d_nonlinear(d_nonlinear_val),
        y_linear(0), y_nonlinear(0), y_prev_nonlinear(0) {}


    void simulateLinearModel(double u) {
        y_linear = a_linear * y_linear + b_linear * u;
    }

    void simulateNonlinearModel(double u, double u_prev) {
        y_nonlinear = a_nonlinear * y_nonlinear - b_nonlinear * pow(y_prev_nonlinear, 2) + c_nonlinear * u + d_nonlinear * sin(u_prev);
        y_prev_nonlinear = y_nonlinear;
    }

    double getCurrentTemperatureLinear() {
        return y_linear;
    }

    double getCurrentTemperatureNonlinear() {
        return y_nonlinear;
    }
};

int main() {

    double a_linear = 0.87;
    double b_linear = 0.53;
    double a_nonlinear = 0.77;
    double b_nonlinear = 0.35;
    double c_nonlinear = 0.28;
    double d_nonlinear = 0.17;
    double u = 2;
    double u_prev = 0;

    TemperatureSimulator simulator(a_linear, b_linear, a_nonlinear, b_nonlinear, c_nonlinear, d_nonlinear);

    for (int t = 0; t < 10; t++) {
        simulator.simulateLinearModel(u);
        double currentTemperature = simulator.getCurrentTemperatureLinear();
        std::cout << currentTemperature << std::endl;
    }
    std::cout << std::endl;
    for (int t = 0; t < 10; t++) {
        simulator.simulateNonlinearModel(u, u_prev);
        double currentTemperature = simulator.getCurrentTemperatureNonlinear();
        std::cout << currentTemperature << std::endl;
        u_prev = u;
    }

    return 0;
}