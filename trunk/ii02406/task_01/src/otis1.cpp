#include <iostream>
#include <cmath>

double computeNextLinearValue(double A, double B, double U, double& Y) {
    Y = A * Y + B * U;
    return Y;
}

void printLinearOutput(double A, double B, double U, double Y, int T) {
    std::cout << "Linear model" << std::endl;
    for (int N = 0; N < T; ++N) {
        std::cout << Y << std::endl;
        computeNextLinearValue(A, B, U, Y);
    }
    std::cout << std::endl;
}

double computeNextNonlinearValue(double A, double B, double C, double D, double U, double& Y, double& Y_pre) {
    double nextY;
    if (Y_pre == 0) {
        nextY = A * Y - B * pow(Y_pre, 2) + C * 1 + D * sin(1);
    }
    else {
        nextY = A * Y - B * pow(Y_pre, 2) + C * U + D * sin(U);
    }
    Y_pre = Y;
    Y = nextY;
    return Y;
}

void printNonlinearOutput(double A, double B, double C, double D, double U, double Y, double Y_pre, int T) {
    std::cout << "Nonlinear model" << std::endl;
    for (int I = 0; I < T; ++I) {
        std::cout << Y << std::endl;
        computeNextNonlinearValue(A, B, C, D, U, Y, Y_pre);
    }
}

int main() {
    const double A_linear = 0.3;
    const double B_linear = 0.3;
    const double U_linear = 1.0;
    double Y_linear = 0.0;
    const int T_linear = 20;

    printLinearOutput(A_linear, B_linear, U_linear, Y_linear, T_linear);

    const double A_nonlinear = 0.3;
    const double B_nonlinear = 0.3;
    const double C_nonlinear = 0.2;
    const double D_nonlinear = 0.4;
    const double U_nonlinear = 1.0;
    double Y_nonlinear = 0.0;
    double Y_pre_nonlinear = 0.0;
    const int T_nonlinear = 20;

    printNonlinearOutput(A_nonlinear, B_nonlinear, C_nonlinear, D_nonlinear, U_nonlinear, Y_nonlinear, Y_pre_nonlinear, T_nonlinear);

    return 0;
}