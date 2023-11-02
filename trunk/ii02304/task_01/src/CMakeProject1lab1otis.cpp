#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

// Constants
const float a = 1.0;
const float b = 0.5;
const double c = 0.001;
const double d = 0.999;
const int t = 10;

// Linear model function
void linmodel(float a, float b, float ylin, float ulin) {
    vector<float> ylinmodel(t + 1);
    ylinmodel[0] = ylin;
    cout << "Linear model:" << endl;
    for (int i = 0; i <= t; i++) {
        ylinmodel[i + 1] = a * ylinmodel[i] + b * ulin;
        cout << ylinmodel[i + 1] << endl;
    }
}

// Nonlinear model function
void nonlinear(float a, float b, double c, double d, float ulin) {
    vector<float> ynonlinmodel(t + 1);
    float y_prev = 0;
    float y = 0;
    cout << endl << "Nonlinear model:" << endl;
    for (int i = 0; i <= t; i++) {
        if (i == 1) {
            y = 1.2;
            y_prev = y;
            y = a * y + c * ulin + d * sin(ulin);
        }
        if (i <= t) {
            ynonlinmodel[i + 1] = a * y - b * pow(y_prev, 2) + c * ulin + d * sin(ulin);
            y_prev = y;
            y = ynonlinmodel[i + 1];
            cout << ynonlinmodel[i + 1] << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    linmodel(a, b, 0.0, 1.0);
    nonlinear(a, b, c, d, 1.0);
    return 0;
}
