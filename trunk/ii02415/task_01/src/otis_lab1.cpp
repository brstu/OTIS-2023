#include <iostream>
#include <math.h>
using namespace std;

class Perem {
public:
    void arry1() {
        cout << "LineModel" << endl;
        float Yt = 3.0;
        float Ut = 0.85;
        int time = 10;
        float arrLine[10];
        for (int i = 0; i < time; i++) {

            Yt = a * Yt + b * Ut;
            arrLine[i] = Yt;
            cout << Yt << endl;
        }
    }

    void arry2() {
        cout << "NoLineModel" << endl;
        float Yt = 2.0;
        float Ut = 0.45;
        float Prev_Yt = 1;
        int time = 10;
        float arrNoLine[10];
        for (int i = 0; i < time; i++) {
            Yt = a * Yt - b * pow(Prev_Yt, 2) + c * Ut + d * sin(Ut);
            arrNoLine[i] = Yt;
            cout << Yt << endl;
        }
    }

private:
    const int a = 4;
    const int b = 2;
    const int c = 3;
    const int d = 6;
};

int main() {
    Perem MClass;
    MClass.arry1();
    MClass.arry2();

    return 0;
}