#include <iostream>
#include "ControlSystem.h"
#include "fstream"

int main() {
    double setValue;
    std::string fileNameOut = "output.txt";
    std::ofstream out(fileNameOut);
    ControlSystem controlSystem;

    if (out.is_open()) {
        std::cout << "Enter the set value: ";
        std::cin >> setValue;
        controlSystem.nonlinear(100, setValue);
        std::vector<double> yValues =  controlSystem.getY();

        std::size_t size = yValues.size();
        for (int i = 0; i < size; i++) {
            double scaledValue = yValues[i] * setValue / yValues[size - 1];
            out << i << " " << scaledValue << std::endl;
        }

        out.close();
    } else {
        throw std::runtime_error("Cannot open the output.txt file.");
    }

    return 0;
}
