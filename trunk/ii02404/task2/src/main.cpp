#include <iostream>
#include <cmath>

class PIDController {
public:
    PIDController(double Kp, double Ki, double Kd, double T0)
        : Kp(Kp), Ki(Ki), Kd(Kd), T0(T0), prevError(0.0), integral(0.0) {}

    double compute(double setpoint, double processVariable) {
        double error = setpoint - processVariable;
        integral += error * T0;
        double derivative = (error - prevError) / T0;
        double output = Kp * error + Ki * integral + Kd * derivative;
        
        prevError = error;

        return output;
    }

private:
    double Kp;      // Proportional gain
    double Ki;      // Integral gain
    double Kd;      // Derivative gain
    double T0;      // Sampling time
    double prevError;
    double integral;
};

class TemperatureSystem {
public:
    TemperatureSystem(double a, double b, double c, double d)
        : a(a), b(b), c(c), d(d), y_prev(0.0), y_prev2(0.0) {}

    double update(double u) {
        double y = a * y_prev + b * std::pow(y_prev2, 2) + c * u + d * std::sin(u);
        y_prev2 = y_prev;
        y_prev = y;
        return y;
    }

private:
    double a;
    double b;
    double c;
    double d;
    double y_prev;
    double y_prev2;
};

int main() {
    // Параметры ПИД-регулятора
    double Kp = 1.0;
    double Ki = 0.1;
    double Kd = 0.01;
    double T0 = 0.1;  // Произвольное значение шага дискретизации

    // Параметры объекта управления
    double a = 0.5;
    double b = -0.1;
    double c = 0.2;
    double d = 0.01;

    PIDController pidController(Kp, Ki, Kd, T0);
    TemperatureSystem temperatureSystem(a, b, c, d);

    // Моделирование процесса управления
    for (int i = 0; i < 100; ++i) {
        double setpoint = 25.0;  // Желаемая температура
        double measuredTemperature = temperatureSystem.update(pidController.compute(setpoint, temperatureSystem.update(1.0)));
        std::cout << "Time: " << i * T0 << "s, Temperature: " << measuredTemperature << "C" << std::endl;
    }

    return 0;
}
