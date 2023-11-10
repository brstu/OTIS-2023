#include <iostream>
#include <cmath>

using namespace std;

class ModelParameters
{
    double a = 0.3;
    double b = 0.47;
    double c = 0.13;
    double d = 0.47;
    double u = 1.1;
    double y = 0.1;

    friend double linear_model(int t, int n);
    friend double unlinear_model(int t);

public:
    ModelParameters() : y(0.1) {}
};

ModelParameters params;

double linear_model(int t, int n)
{
    if (n < t)
    {
        double result = params.a * params.y + params.b * params.u;
        params.y = result;
        cout << params.y << endl;
        return linear_model(t, n + 1);
    }
    return params.y;
}

double unlinear_model(int t)
{
    for (int i = 1; i <= t; i++)
    {
        double y_prev = params.y;
        double u_prev = params.u;
        double result = params.a * params.y - params.b * pow(y_prev, 2) + params.c * params.u + params.d * sin(u_prev);
        params.y = result;
        cout << params.y << endl;
    }
    return params.y;
}

int main()
{
    cout << "Linel model" << endl;
    cout << linear_model(10, 0) << endl;

    cout << "\n---------------\n"
         << endl;

    cout << "Unlinel model" << endl;
    cout << unlinear_model(10) << endl;

    return 0;
}
