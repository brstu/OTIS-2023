#include <iostream>
#include <cmath>

const float COEFFICIENT_A = 1;
const float COEFFICIENT_B = 0.02;
const float COEFFICIENT_C = 1;
const float COEFFICIENT_D = 1;

// Calculate the temperature using a linear model
void linearmod(float y, float j, int tend) {
    for (int t = 1; t <= tend; ++t) {
        float y_sld = COEFFICIENT_A * y + COEFFICIENT_B * j;
        y = y_sld;
        std::cout << y_sld << "\n";
    }
}

// Calculate the temperature using a nonlinear model
void nonlinearmod(float y_pred, float y, float j, int tend) {
    for (int t = 1; t <= tend; ++t) {
        float y_sld = COEFFICIENT_A * y - COEFFICIENT_B * pow(y_pred, 2) + COEFFICIENT_C * j + COEFFICIENT_D * sin(j);
        y_pred = y;
        y = y_sld;
        std::cout << y_sld << "\n";
    }
}

// Ending alert output
void ans() {
    std::cout << "\nModeling ended.\n";
}

int main() {
    float initialTemperature;
    float warm;
    int Tend;

    //Setting starting temp
    std::cout << "Enter starting temperature: ";
    std::cin >> initialTemperature;

    //Checking if it's acceptable
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
    
    //Output of linear modeling
    std::cout << "\nResults of linear modeling:\n";
    linearmod(initialTemperature, warm, Tend);

    //Output of linear modeling
    std::cout << "\nResult of nonlinear modeling:\n";
    nonlinearmod(0, initialTemperature, warm, Tend);

    // Finishing task
    ans();
    
    return 0;
}
