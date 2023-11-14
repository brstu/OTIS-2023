#include <iostream>
#include <cmath>
using namespace std;
const double a = 0.5;
const double b = 0.5;
const double c = 0.5;
const double d = 0.5;
 
void linearmod(int t, double y, double u) {
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
    double u = 1;
    double y = 0.0;

    int t = 100;
    cout << "linear model" << endl;
    linearmod(t, y, u);

    cout << "________________________" << endl;

    cout << "unlinear model" << endl;
    unlinearmodel(y, y, u, u, t);

    return 0;
}
