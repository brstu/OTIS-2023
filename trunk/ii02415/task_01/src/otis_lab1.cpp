#include <iostream>
#include <cmath>

class Perem {
public:
    void arry1() {
        std::cout << "LineModel" << std::endl;
        float Yt = 3.0;
        float Ut = 0.85;
        const int time = 10;
        float arrLine[time];
        for (int i = 0; i < time; i++) {
            Yt = a * Yt + b * Ut;
            arrLine[i] = Yt;
            std::cout << Yt << std::endl;
        }
    }

    void arry2() {
        std::cout << "NoLineModel" << std::endl;
        float Yt = 2.0;
        float Ut = 0.45;
        float Prev_Yt = 1;
        const int time = 10;
        float arrNoLine[time];
        for (int i = 0; i < time; i++) {
            Yt = a * Yt - b * std::pow(Prev_Yt, 2) + c * Ut + d * std::sin(Ut);
            arrNoLine[i] = Yt;
            std::cout << Yt << std::endl;
        }
    }

private:
    const float a = 4.0;
    const float b = 2.0;
    const float c = 3.0;
    const float d = 6.0;
};

int main() {
    Perem MClass;
    MClass.arry1();
    MClass.arry2();

    return 0;
}