#include <iostream>
#include <cmath>

class LinearModel {
private:
    double A;
    double B;
    double U;
    double Y;

public:
    LinearModel(double a, double b, double u, double y) : A(a), B(b), U(u), Y(y) {}

    double computeNextValue() {
        Y = A * Y + B * U;
        return Y;
    }

    void printOutput(int T) {
        std::cout << "Linear model" << std::endl;
        for (int N = 0; N < T; ++N) {
            std::cout << Y << std::endl;
            computeNextValue();
        }
        std::cout << std::endl;
    }
};

class NonlinearModel {
private:
    double A;
    double B;
    double C;
    double D;
    double U;
    double Y;
    double Y_pre;
    const double U_pre = 1.0;

public:
    NonlinearModel(double a, double b, double c, double d, double u, double y, double y_pre)
        : A(a), B(b), C(c), D(d), U(u), Y(y), Y_pre(y_pre) {

    }

    double computeNextValue() {
        double nextY;
        if (Y_pre == 0) {
            nextY = A * Y - B * pow(Y_pre, 2) + C * 1 + D * sin(1);
        }
        else {
            nextY = A * Y - B * pow(Y_pre, 2) + C * U + D * sin(U_pre);
        }
        Y_pre = Y;
        Y = nextY;
        return Y;
    }

    void printOutput(int T) {
        std::cout << "Nonlinear model" << std::endl;
        for (int I = 0; I < T; ++I) {
            std::cout << Y << std::endl;
            computeNextValue();
        }
    }
};

int main() {
    const double A_linear = 0.3;
    const double B_linear = 0.3;
    const double U_linear = 1.0;
    const double Y_linear = 0.0;
    const int T_linear = 20;

    LinearModel linearModel(A_linear, B_linear, U_linear, Y_linear);
    linearModel.printOutput(T_linear);

    const double A_nonlinear = 0.3;
    const double B_nonlinear = 0.3;
    const double C_nonlinear = 0.2;
    const double D_nonlinear = 0.4;
    const double U_nonlinear = 1.0;
    const double Y_nonlinear = 0.0;
    const double Y_pre_nonlinear = 0.0;
    const int T_nonlinear = 20;

    NonlinearModel nonlinearModel(A_nonlinear, B_nonlinear, C_nonlinear, D_nonlinear, U_nonlinear, Y_nonlinear,
        Y_pre_nonlinear);
    nonlinearModel.printOutput(T_nonlinear);

    return 0;
}