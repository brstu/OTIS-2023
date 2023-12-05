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
};

std::vector<double> y_lin = {0.0};  // Initialize with some value
std::vector<double> y_nonlin = {0.0};  // Initialize with some value

// Modify the function to take a non-const vector
void linear_model(const ModelParameters& params, std::vector<double>& y_lin) {
    if (params.i <= params.t) {
        std::cout << params.y << std::endl;
        y_lin.push_back(params.y);
        double y_2 = params.a * params.y + params.b * params.u;
        ModelParameters new_params = params;
        new_params.y = y_2;
        new_params.i += 1;
        linear_model(new_params, y_lin);
    } else {
        std::cout << "END" << std::endl;
    }
}

// Modify the function to take a non-const vector
void nonlinear_model(const ModelParameters& params, std::vector<double>& y_nonlin) {
    if (params.i == 1) {
        std::cout << params.y << std::endl;
        y_nonlin.push_back(params.y);
        double y_2 = params.a * params.y - params.b * pow(params.y_prev, 2) + params.c * 0 + params.d * sin(0);
        ModelParameters new_params = params;
        new_params.y = y_2;
        new_params.i += 1;
        nonlinear_model(new_params, y_nonlin);
    } else if (params.i <= params.t) {
        std::cout << params.y << std::endl;
        y_nonlin.push_back(params.y);
        double y_2 = params.a * params.y - params.b * pow(params.y_prev, 2) + params.c * params.u + params.d * sin(params.u_prev);
        ModelParameters new_params = params;
        new_params.y = y_2;
        new_params.i += 1;
        nonlinear_model(new_params, y_nonlin);
    } else {
        std::cout << "END" << std::endl;
    }
}

int main() {
    ModelParameters params;
    params.i = 1;
    params.y = 0.0;
    params.u = 1.0;
    params.t = 10;
    params.a = 1.0;
    params.b = 0.5;
    params.c = 0.001;
    params.d = 0.999;

    std::cout << "Linear Model:" << std::endl;
    linear_model(params, y_lin);

    std::cout << "Nonlinear Model:" << std::endl;
    nonlinear_model(params, y_nonlin);

    return 0;
}
