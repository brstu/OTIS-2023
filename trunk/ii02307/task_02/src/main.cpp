#include <iostream>
#include "fstream"
#include "ControlSystem.h"
#include "Exceptions/FileOpenException.h"

int main() {
    try {
        double setValue;
        std::string fileNameOut = "output.txt";
        std::ofstream out(fileNameOut);
        ControlSystem controlSystem;

        if (!out.is_open()) {
            throw FileOpenException(fileNameOut);
        }

        std::cout << "Enter the set value: ";
        std::cin >> setValue;
        controlSystem.nonlinear(100, setValue);
        std::vector<double> yValues = controlSystem.getY();

        std::size_t size = yValues.size();
        for (int i = 0; i < size; i++) {
            double scaledValue = yValues[i] * setValue / yValues[size - 1];
            out << i << " " << scaledValue << std::endl;
        }

        out.close();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }


    return 0;
}
