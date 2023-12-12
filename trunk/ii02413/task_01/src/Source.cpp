#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

double calculateFunction1(double y, double u) {
    double coefficientA = 0.6;
    double coefficientB = 0.5;
    return coefficientA * y + coefficientB * u;
}

double calculateFunction2(double y, double u, double y1) {
    double coefficientA = 0.6;
    double coefficientB = 0.5;
    double coefficientC = 0.62;
    double coefficientD = 1.1;
    return coefficientA * y - coefficientB * pow(y1, 2) + coefficientC * u + coefficientD * sin(u);
}

int main() {
    ofstream outputFile("output.txt");

    double initialY, initialU;
    cout << "Enter initial values for y and u: ";
    cin >> initialY >> initialU;

    double y1 = initialY;
    double y2 = initialY;
    double previousY2 = initialY;

    int i = 0;
    outputFile << i << " " << y1 << " " << y2 << endl;

    y1 = calculateFunction1(y1, initialU);
    y2 = calculateFunction2(y2, initialU, previousY2);
    i++;
    outputFile << i << " " << y1 << " " << y2 << endl;

    for (i = 2; i < 100; i++) {
        y1 = calculateFunction1(y1, initialU);
        y2 = calculateFunction2(y2, initialU, previousY2);
        previousY2 = y2;
        outputFile << i << " " << y1 << " " << y2 << endl;
    }

    return 0;
}
