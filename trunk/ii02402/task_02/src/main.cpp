#include <iostream>
#include <vector>
using namespace std;

const double PropComp = 0.097;    // Proportional component
const double IntComp = 2.1623;    // Integral component
const double DiffComp = 1.0;      // Differential component
const double timeInterval = 1.0;  // Interval

const double q1 = PropComp * (1 + DiffComp / timeInterval);
const double q2 = -PropComp * (1 + 2 * DiffComp / timeInterval - timeInterval / IntComp);
const double q3 = (PropComp * DiffComp) / timeInterval;

double calculate_linear_model(double y_current, double alpha, double beta, double controlInput) {
    y_current = alpha * y_current + beta * controlInput;
    return y_current;
}

const int totalIterations = 100;      // Number of iterations
const double desiredValue = 29.0;  // Desired value

void executeMainFunction() {
    cout << "EXECUTION BEGINS" << endl;
    vector<double> y_values;
    vector<double> controlInputs;
    double alpha = 0.8;
    double beta = 0.3;
    double y = 0.0;
    double controlInput = 0.0;
    vector<double> errorVector = { 0.0, 0.0, 0.0 };

    for (int i = 1; i <= totalIterations; i++) {
        double previousControlInput;
        double deltaControlInput;
        errorVector[2] = errorVector[1];
        errorVector[1] = abs(desiredValue - y);
        deltaControlInput = q1 * errorVector[1] + q2 * errorVector[2] + q3 * errorVector[0];
        previousControlInput = controlInput;
        controlInput = previousControlInput + deltaControlInput;
        y = calculate_linear_model(y, alpha, beta, controlInput);
        y_values.push_back(y);
        controlInputs.push_back(controlInput);
        cout << i << ". y = " << y << "\t| controlInput = " << controlInput << endl;
    }
}

int main() {
    executeMainFunction();
    return 0;
}
