#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// Function declarations
double calculateFunction1(double currentY, double currentU);
double calculateFunction2(double currentY, double currentU, double previousY);

int main() {
    double initialY;
    double initialU;

    cout << "Enter initial values for y and u: ";
    cin >> initialY >> initialU;

    ofstream outputFile("output.txt");

    double y1 = initialY;
    double y2 = initialY;
    double previousY2 = initialY;

    int iteration = 0;
    outputFile << iteration << " " << y1 << " " << y2 << endl;

    y1 = calculateFunction1(y1, initialU);
    y2 = calculateFunction2(y2, initialU, previousY2);
    iteration++;
    outputFile << iteration << " " << y1 << " " << y2 << endl;

    for (iteration = 2; iteration < 100; iteration++) {
        y1 = calculateFunction1(y1, initialU);
        y2 = calculateFunction2(y2, initialU, previousY2);
        previousY2 = y2;
        outputFile << iteration << " " << y1 << " " << y2 << endl;
    }

    return 0;
}

// Function definitions
double calculateFunction1(double currentY, double currentU) {
    // Implementation of function 1
    double coefficientA = 0.6;
    double coefficientB = 0.5;
    return coefficientA * currentY + coefficientB * currentU;
}

double calculateFunction2(double currentY, double currentU, double previousY) {
    // Implementation of function 2
    double coefficientA = 0.6;
    double coefficientB = 0.5;
    double coefficientC = 0.62;
    double coefficientD = 1.1;
    return coefficientA * currentY - coefficientB * pow(previousY, 2) + coefficientC * currentU + coefficientD * sin(currentU);
}
