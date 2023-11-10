#include <iostream>
#include <cmath>

class Perem {
public:
    void LineModel() const {
        std::cout << "LineModel" << std::endl;
        double Yt = 3.0;
        double Ut = 0.85;
        const int time = 10;
        double arrLine[time];
        for (int i = 0; i < time; i++) {
            Yt = a * Yt + b * Ut;
            arrLine[i] = Yt;
            std::cout << Yt << std::endl;
        }
    }

    void NoLineModel() {
        std::cout << "NoLineModel" << std::endl;
        double Yt = 2.0;
        double Ut = 0.45;
        double Prev_Yt = 1;
        const int time = 10;
        double arrNoLine[time];
        for (int i = 0; i < time; i++) {
            Yt = a * Yt - b * pow(Prev_Yt, 2) + c * Ut + d * sin(Ut);
            arrNoLine[i] = Yt;
            std::cout << Yt << std::endl;
        }
    }

private:
    const double a = 4.0;
    const double b = 2.0;
    const double c = 3.0;
    const double d = 6.0;
};

int main() {
    const Perem MClass;
    MClass.arry1();
    MClass.arry2();

    return 0;
}