#include <iostream>
#include <cmath>

// some constants
const double a = 1;
const double b = 0.01;
const double c = 1;
const double d = 1;

// linear model
void linear(double y, double u, int t_end);

// nonlinear model
void nonlinear(double y_prev, double y, double u, int t_end);

int main() {
    int t_end;
    double y;
    double u;
    double y0 = 0;

    std::cout << "Enter temperature: ";
    std::cin >> y;
    std::cout << "\nEnter warm: ";
    std::cin >> u;
    std::cout  << "\nEnter end time: ";
    std::cin >> t_end;
    std::cout << "\nLinear:\n";
    linear(y, u, t_end);
    std::cout << "\nNonlinear:\n";
    nonlinear(y0, y, u, t_end);
    return 0;
}

void linear(double y, double u, int t_end) {
    int t = 1;
    double y_next;
    while(t <= t_end) {
        y_next = a * y + b * u;
        y = y_next;
        std::cout << y_next << "\n";
        t++;
    }
}

void nonlinear(double y_prev, double y, double u, int t_end) {
    int t = 1;
    double y_next;
    while(t <= t_end) {
        y_next = a * y - b * pow(y_prev, 2) + c * u + d * sin(u);
        y_prev = y;
        y = y_next;
        t++;
        std::cout << y_next << "\n";
    }
}
