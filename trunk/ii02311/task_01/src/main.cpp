#include <iostream>
#include <cmath>
using namespace std;
double a = 0.5;
double b = 0.5;
double c = 0.5;
double d = 0.5;
double u = 1;
double y = 0.0;

void linearmod(int t, double y) {
    for (int n = 0; n <= t; n++) {
        cout << y << endl;
        y = a * y + b * u;
    }
}

void unlinearmodel(double y, double yprev, double u, double uprev, int t) {
    for (int i = 1; i <= t; i++) {
        cout << y << endl;
        double ynext = a * y - b * pow(yprev, 2) + c * u + d * sin(uprev);
        yprev = y;
        uprev = u;
        y = ynext;
    }
}

int main() {
    int t = 12;
    cout << "linear model" << endl;
    linearmod(t, y);

    cout << "________________________" << endl;

    cout << "unlinear model" << endl;
    unlinearmodel(y, y, u, u, t);

    return 0;
}