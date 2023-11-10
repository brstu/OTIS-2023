#include <iostream>
#include <cmath>
#include <vector>

class Perem {
public:
    void LineModel() const {
        std::cout << "LineModel" << std::endl;
        double Yt = 3.0;
        double Ut = 0.85;
        const int time = 10;
        std::vector<double> arrLine(time);
        for (int i = 0; i < time; i++) {
            Yt = a * Yt + b * Ut;
            arrLine[i] = Yt;
            std::cout << Yt << std::endl;
        }
    }

    void NoLineModelFunc() {
        std::cout << "NoLineModel" << std::endl;
        double Yt = 2.0;
        double Ut = 0.45;
        double Prev_Yt = 1.0;
        const int time = 10;
        std::vector<double> arrNoLine(time);
        for (int i = 0; i < time; i++) {
            Yt = a * Yt - b * std::pow(Prev_Yt, 2) + c * Ut + d * std::sin(Ut);
            arrNoLine[i] = Yt;
            std::cout << Yt << std::endl;
        }
    }

private:
    static constexpr double a = 4.0;
    static constexpr double b = 2.0;
    static constexpr double c = 3.0;
    static constexpr double d = 6.0;
};

int main() {
    const Perem MClass;
    MClass.LineModel();
    MClass.NoLineModelFunc();

    return 0;
}