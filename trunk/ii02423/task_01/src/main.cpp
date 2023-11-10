#include <iostream>
#include <cmath>
using namespace std;

class ModelParameters
{
public:
    const double a = 0.3;
    const double b = 0.47;
    const double c = 0.13;
    const double d = 0.47;
    const double u = 1.1;
    double y = 0.1;
    friend double linear_model(int t, int n);
    friend double unlinear_model(int t);
};

const ModelParameters params;

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
    int i = 1;
    while (i <= t)
    {
        double y_prev = params.y;
        double u_prev = params.u;
        double result = params.a * params.y - params.b * pow(y_prev, 2) + params.c * params.u + params.d * sin(u_prev);
        params.y = result;
        cout << params.y << endl;
        i++;
    }
    return params.y;
}

int main()
{
    cout << "Linear model" << endl;
    linear_model(10, 0);
    cout << "\n----------------\n"
         << endl;
    cout << "Nonlinear model" << endl;
    unlinear_model(10);
    return 0;
}
