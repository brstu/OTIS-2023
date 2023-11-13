#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

class functions {
private:
    double i = 2; //start time
    double u = 2; //input warm
    double t = 50; //end time
    const double a = 0.2;
    const double b = 0.3;
    const double c = 0.45;
    const double d = 0.7; //some constants
public:
    void linear(double y) {
        if (i != t) {
            ofstream file("lin.txt", ios::app);
            file << i << " " << y << endl;
            ++i;
            cout << y << endl;
            linear(a * y + b * u);
        }
        else {
            cout << "end linear\n";
        }
    }
    void nonlinear(double y, double y1) {
        if (i != t) {
            ofstream file("nonlin.txt", ios::app);
            file << i << " " << y << endl;
            cout << y << endl;
            ++i;
            nonlinear(a * y - b * y1 * y1 + c * u + d * sin(u), y);
        }
        else {
            cout << "end nonlinear" << endl;
        }
    }
};

int main() {
    double y = 0, y1 = 0;
    ofstream file1("lin.txt");
    ofstream file2("nonlin.txt");
    file1.clear();
    file2.clear();
    functions linear, nonlinear;
    cout << "linear model: \n";
    linear.linear(y);
    cout << "nonlinear model: \n";
    nonlinear.nonlinear(y, y1);
}