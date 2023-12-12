#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// Объявления функций
double calculateFunction1(double y, double u);
double calculateFunction2(double y, double u, double y1);

int main() {
    double initialY;
    double initialU;

    cout << "Enter initial values for y and u: ";
    cin >> initialY >> initialU;

    ofstream outputFile("output.txt");

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

// Определения функций
double calculateFunction1(double y, double u) {
    // Реализация функции 1
    double a = 0.6;
    double b = 0.5;
    return a * y + b * u;
}

double calculateFunction2(double y, double u, double y1) {
    // Реализация функции 2
    double a = 0.6;
    double b = 0.5;
    double c = 0.62;
    double d = 1.1;
    return a * y - b * pow(y1, 2) + c * u + d * sin(u);
}
