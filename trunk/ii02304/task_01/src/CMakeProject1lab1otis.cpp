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
void linmodel(float a_param, float b_param, float ylin, float ulin) {
    vector<float> ylinmodel(t + 1);
    ylinmodel[0] = ylin;
    cout << "Linear model:" << endl;
    for (int i = 0; i <= t; i++) {
        ylinmodel[i + 1] = a_param * ylinmodel[i] + b_param * ulin;
        cout << ylinmodel[i + 1] << endl;
    }
}

// Nonlinear model function
void nonlinear(float a_param, float b_param, double c_param, double d_param, float ulin) {
    vector<double> ynonlinmodel(t + 1); // Changed from vector<float> to vector<double>
    double y_prev = 0; // Changed from float to double
    double y = 0; // Changed from float to double
    cout << endl << "Nonlinear model:" << endl;
    for (int i = 0; i <= t; i++) {
        if (i == 1) {
            y = 1.2;
            y_prev = y;
            y = a_param * y + c_param * ulin + d_param * sin(ulin);
        }
        if (i <= t) {
            ynonlinmodel[i + 1] = a_param * y - b_param * pow(y_prev, 2) + c_param * ulin + d_param * sin(ulin);
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
