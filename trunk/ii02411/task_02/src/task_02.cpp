#include <iostream>
#include <cmath>

class TemperatureController {
private:
    double modelA_;
    double modelB_;
    double roomTemperature_;
    double targetTemperature_;

public:
    TemperatureController(double a, double b, double roomTemp, double targetTemp)
        : modelA_(a), modelB_(b), roomTemperature_(roomTemp), targetTemperature_(targetTemp) {}

    double calculateOutput(double currentOutput) const {
        return std::round((modelA_ * currentOutput + modelB_ * roomTemperature_) * 10) / 10;
    }

    void printOutput(int t, double currentOutput, double currentInput, double error) const {
        std::cout << "t = " << t << "\ty: " << currentOutput << "\tu: " << currentInput << "\te: " << error << std::endl;
    }

    void runController(int time) const{
        double pidK = 1.0;
        double pidT = 1.0;
        double pidTD = 0.55;
        double pidT0 = 1.0;
        double pidQ0 = pidK * (1 + pidTD / pidT0);
        double pidQ1 = -pidK * (1 + 2 * pidTD / pidT0 - pidT0 / pidT);
        double pidQ2 = pidK * pidTD / pidT0;
        double error1 = 0.0;
        double error2 = 0.0;
        double error3 = 0.0;
        double previousInput = 0.0;
        double currentInput = 0.0;
        double currentOutput = 0.0;

        for (int i = 1; i < time - 1; i++) {
            double error = targetTemperature_ - currentOutput;
            error1 = error;

            if (i < 4) {
                currentInput = 1.0;
                currentOutput = calculateOutput(currentOutput);
                printOutput(i, currentOutput, currentInput, error);
            }
            else {
                double input = previousInput + (pidQ0 * error1) + (pidQ1 * error2) + (pidQ2 * error3);
                previousInput = input;
                currentOutput = calculateOutput(currentOutput);
                printOutput(i, currentOutput, input, error);
                error3 = error2;
                error2 = error1;
            }
        }
    }
};

int main() {
    int time = 50;
    double targetTemperature = 20.0;
    double modelA = 0.982;
    double modelB = 0.252;
    double roomTemperature = 12.0;

    TemperatureController controller(modelA, modelB, roomTemperature, targetTemperature);
    controller.runController(time);

    return 0;
}