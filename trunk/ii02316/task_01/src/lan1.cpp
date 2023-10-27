#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

void linear(double a, double b, double y, double u, double i, double t) {
    ofstream file("lin.txt");
    for (int j = i; j <= t; j++) {
        file << j << " " << y << endl;
        cout << y << endl;
        y = a * y + b * u;
    }
    cout << "end linear\n";
}

void nonlinear(double a, double b, double c, double d, double y, double y1, double u, double i, double t) {
    ofstream file("nonlin.txt");
    for (int j = i; j <= t; j++) {
        file << j << " " << y << endl;
        cout << y << endl;
        if (j == 1) {
            y = a * y - b * y1 * y1 + c * 0 + d * sin(0);
        }
        else {
            y = a * y - b * y1 * y1 + c * u + d * sin(u);
        }
        y1 = y;
    }
    cout << "end nonlinear\n";
}

int main() {
    ofstream file1("lin.txt");
    ofstream file2("nonlin.txt");
    file1.clear();
    file2.clear();
    double i = 1; //start time
    double y = 0; //input temperature
    double u = 1; //input warm
    double t = 100; //end time
    const double a = 0.5;
    const double b = 0.5;
    const double c = 0.5;
    const double d = 0.5; //some constants
    cout << "linear model: \n";
    linear(a, b, y, u, i, t);
    cout << "nonlinear model: \n";
    nonlinear(a, b, c, d, y, y, u, i, t);
}
