#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

class Function {
    private:
        int i = 1; //start time
        double y = 0; //input temperature
        double y1 = 0;
        double u = 1; //input warm
        int t = 100; //end time
        const double a = 0.5;
        const double b = 0.5;
        const double c = 0.5;
        const double d = 0.5; //some constants
public:
    void linear() {
        ofstream file("lin.txt");
        for (int j = i; j <= t; j++) {
            file << j << " " << y << endl;
            cout << y << endl;
            y = a * y + b * u;
        }
        cout << "end linear\n";
    }

    void nonlinear() {
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
};



int main() {
    ofstream file1("lin.txt");
    ofstream file2("nonlin.txt");
    file1.clear();
    file2.clear();
    
    Function func;
    cout << "linear model: \n";
    func.linear();
    cout << "nonlinear model: \n";
    func.nonlinear();
}
