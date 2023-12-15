#include <iostream>
#include <cmath>

const double COEFFICIENT_A = 1;
const double COEFFICIENT_B = 0.02;
const double COEFFICIENT_C = 1;
const double COEFFICIENT_D = 1;

// Calculate the temperature using a linear model
void linod(double y, double j, int tend, std::ofstream& outputFile) {
    for (int t = 1; t <= tend; ++t) {
        double y_ced = COEFFICIENT_A * y + COEFFICIENT_B * j;
        y = y_ced;
        std::cout << y_ced << "\n";
        outputFile << y_ced << "\n";
    }
}

// Calculate the temperature using a nonlinear model
void nonlinod(double y_brv, double y, double j, int tend, std::ofstream& outputFile) {
    for (int t = 1; t <= tend; ++t) {
        double y_ced = COEFFICIENT_A * y - COEFFICIENT_B * pow(y_brv, 2) + COEFFICIENT_C * j + COEFFICIENT_D * sin(j);
        y_brv = y;
        y = y_ced;
        std::cout << y_ced << "\n";
        outputFile << y_ced << "\n";
    }
}

// Ending alert output
void answer(int Tend, int warm) {
    if (Tend > warm) {
    std::cout << "\nModeling ended.\n";
    }
}

int main() {
    int initialTemperature;
    int warm;
    int Tend;

    //Setting starting temp
    std::cout << "Enter starting temperature: ";
    std::cin >> initialTemperature;

    //Checking if starting temp is acceptable
    while (initialTemperature < 0 || initialTemperature > 100) {
    std::cout << "Starting temperature must be from 0 to 100. Please try again: ";
    std::cin >> initialTemperature;
    }

    //Setting warming
    std::cout << "Enter warming: ";
    std::cin >> warm;

    //Setting end time
    std::cout << "Enter end time: ";
    std::cin >> Tend;

    //Checking if end time is acceptable
    while (Tend < warm) {
    std::cout << "End time is not tolerable . Please try again: ";
    std::cin >> Tend;
    }

    std::ofstream outputFile("output.txt");
    
    //Output of linear modeling
    std::cout << "\nResults of linear modeling:\n";
    linod(initialTemperature, warm, Tend, outputFile);

    //Output of linear modeling
    std::cout << "\nResult of nonlinear modeling:\n";
    nonlinod(0, initialTemperature, warm, Tend, outputFile);

    // Close the output file
    outputFile.close();
    
    // Finishing task
    answer(Tend, warm);
    
    return 0;
}
