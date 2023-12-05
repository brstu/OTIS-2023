#include <iostream>
#include <cmath>
#include <vector>

// Define a struct to hold parameters for the models
struct ModelParameters {
    double a;
    double b;
    double c;
    double d;
    double y;
    double y_prev;
    double u;
    double u_prev;
    int i;
    int t;
    const std::vector<double> y_lin; // Use const for y_lin
    const std::vector<double> y_nonlin; // Use const for y_nonlin

    // Constructor (initialize y_lin and y_nonlin in the constructor body)
    ModelParameters() : y_lin(), y_nonlin(), i(1), y(0.0), u(1.0), t(10), a(1.0), b(0.5), c(0.001), d(0.999) {}

};

// Modify the function to take a struct instead of individual parameters
void linear_model(ModelParameters& params) {
    if (params.i <= params.t) {
        std::cout << params.y << std::endl;
        // Append to y_lin directly
        const_cast<std::vector<double>&>(params.y_lin).push_back(params.y);
        double y_2 = params.a * params.y + params.b * params.u;
        params.y = y_2;
        params.i += 1;
        linear_model(params);
    } else {
        std::cout << "END" << std::endl;
    }
}

// Modify the function to take a struct instead of individual parameters
void nonlinear_model(ModelParameters& params) {
    if (params.i == 1) {
        std::cout << params.y << std::endl;
        // Append to y_nonlin directly
        const_cast<std::vector<double>&>(params.y_nonlin).push_back(params.y);
        double y_2 = params.a * params.y - params.b * pow(params.y_prev, 2) + params.c * 0 + params.d * sin(0);
        params.y = y_2;
        params.i += 1;
        nonlinear_model(params);
    } else if (params.i <= params.t) {
        std::cout << params.y << std::endl;
        // Append to y_nonlin directly
        const_cast<std::vector<double>&>(params.y_nonlin).push_back(params.y);
        double y_2 = params.a * params.y - params.b * pow(params.y_prev, 2) + params.c * params.u + params.d * sin(params.u_prev);
        params.y = y_2;
        params.i += 1;
        nonlinear_model(params);
    } else {
        std::cout << "END" << std::endl;
    }
}

int main() {
    ModelParameters params;
    std::cout << "Linear Model:" << std::endl;
    linear_model(params);
    std::cout << "Nonlinear Model:" << std::endl;
    nonlinear_model(params);
    return 0;
}
