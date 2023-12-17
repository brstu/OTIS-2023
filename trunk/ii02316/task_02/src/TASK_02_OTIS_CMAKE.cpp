#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const double A = 0.5;
const double B = 0.5;
const double C = 0.5;
const double D = 0.5;
const double K = 0.001;
const double T = 50;
const double TD = 100;
const double To = 1;

void simulateSystem(double desiredValue) {
    int timeSteps = 100;

    double q0 = K * (1 + TD / To);
    double q1 = -K * (1 + 2 * TD / To - To / T);
    double q2 = K * TD / To;

    vector<double> outputValues = { 0, 0, 0 };
    vector<double> controlInputs = { 1, 1 };

    for (int i = 0; i < timeSteps; i++) {
        double error0 = desiredValue - outputValues[outputValues.size() - 1];
        double error1 = desiredValue - outputValues[outputValues.size() - 2];
        double error2 = desiredValue - outputValues[outputValues.size() - 3];

        double controlSignal = q0 * error0 + q1 * error1 + q2 * error2;
        controlInputs[0] = controlInputs[1] + controlSignal;
        controlInputs[1] = controlInputs[0];

        double systemOutput = A * outputValues[outputValues.size() - 1] -
            B * outputValues[outputValues.size() - 2] * outputValues[outputValues.size() - 2] +
            C * controlInputs[0] + D * sin(controlInputs[1]);

        outputValues.push_back(systemOutput);
    }

    // Output the scaled results
    for (double output : outputValues) {
        double scaledOutput = output * desiredValue / outputValues[outputValues.size() - 1];
        cout << scaledOutput << endl;
    }
}

int main() {
    setlocale(LC_ALL, "EN");
    double desiredValue;
    cout << "Desired value: ";
    cin >> desiredValue;

    simulateSystem(desiredValue);

    return 0;
}
