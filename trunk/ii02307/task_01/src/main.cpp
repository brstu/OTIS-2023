#include <iostream>
#include <cmath>

// linear model
void linear(float y, float a, float b, float u, int t_end);

// nonlinear model
void nonlinear(float y_prev, float y, float u, float a, float b, float c, float d, int t_end);

int main() {
    int t_end;
    float y, u, y0 = 0;
    // some constants
    float a = 1, b = 0.01, c = 1, d = 1;
    std::cout << "Enter temperature: ";
    std::cin >> y;
    std::cout << "\nEnter warm: ";
    std::cin >> u;
    std::cout  << "\nEnter end time: ";
    std::cin >> t_end;
    std::cout << "\nLinear:\n";
    linear(y, a, b, u, t_end);
    std::cout << "\nNonlinear:\n";
    nonlinear(y0, y, u, a, b, c, d, t_end);
    return 0;
}

void linear(float y, float a, float b, float u, int t_end) {
    int t = 1;
    float y_next;
    while(t <= t_end) {
        y_next = a * y + b * u;
        y = y_next;
        std::cout << y_next << "\n";
        t++;
    }
}

void nonlinear(float y_prev, float y, float u, float a, float b, float c, float d, int t_end) {
    int t = 1;
    float y_next;
    while(t <= t_end) {
        y_next = a * y - b * pow(y_prev, 2) + c * u + d * sin((double)u);
        y_prev = y;
        y = y_next;
        t++;
        std::cout << y_next << "\n";
    }
}