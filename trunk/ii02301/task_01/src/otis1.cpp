#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class functions {
private:
    double t1 = 1; //начальное время
    double u = 1; //кол-во теплоты
    double t2 = 50; //конечное время
    const double a = 0.2;
    const double b = 0.3;
    const double c = 0.45;
    const double d = 0.7; //исходные данные по номеру варианта
public:
    void nelineynaya(double y, double y1) {
        if (t1 != t2) {
            ofstream file("nonlineyn.txt", ios::app);
            file << t1 << " " << y << endl;
            cout << y << endl;
            ++t1;
            nelineynaya(a * y - b * y1 * y1 + c * u + d * sin(u), y);
        }
        else {
            cout << "end nelineynaya model" << endl;
        }
    }
    void lineynaya(double y) {
        if (t1 != t2) {
            ofstream file("lineyn.txt", ios::app);
            file << t1 << " " << y << endl;
            ++t1;
            cout << y << endl;
            lineynaya(a * y + b * u);
        }
        else {
            cout << "end lineynaya model\n";
        }
    }
};

int main() {
    double y = 0;
    double y1 = 0;
    ofstream file1("lin.txt");
    ofstream file2("nonlin.txt");
    file1.clear();
    file2.clear();
    functions linear;
    functions nonlinear;
    cout << "lineynaya model: \n";
    linear.lineynaya(y);
    cout << "nelineynaya model: \n";
    nonlinear.nelineynaya(y, y1);
}
