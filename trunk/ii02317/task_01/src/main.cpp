#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class Object {
private:
    const double a = 0.5;
    const double b = 0.5;
    const double c = 0.5;
    const double d = 0.5;
    
    int i = 1;
    int t = 100;
    int u = 1;
public:
    void line(double y) {
        ofstream file("line.txt",ios::out);
        cout << "line "<<endl ;
        for (int l = i; l <= t; l++) {
            file << l << " " << y << endl;
            cout << y << endl;
            y = a * y + b * u;
        }
    }
    void nonline (double y, double y1) {
        ofstream file1("nonline.txt", ios::out);
        cout << "nonline "<<endl ;
        for (int l = i; l <= t; l++) {
            file1 << l << " " << y << endl;
            cout << y << endl;
            if (l == 1) {
                y = a * y - b * y1 * y1 + c * 0 + d * sin(0);
            }
            else {
                y = a * y - b * y1 * y1 + c * u + d * sin(u);
            }
            y1 = y;
        }
    }
};
int main () {
double y = 0;
ofstream LineFile("line.txt");
Object LineFunctions;
LineFunctions.line(y);
LineFile.close();
        
y = 0.05;
double y1 = 0.2;
ofstream NonLineFile1("nonline.txt");
Object NonLineFunctions;
NonLineFunctions.nonline(y, y1);
NonLineFile1.close();
        
return 0;
    }
