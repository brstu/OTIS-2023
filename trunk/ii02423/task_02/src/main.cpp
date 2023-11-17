#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class ModelParameters
{
public:
    double A = 0.5;
    double B = 0.5;
    double C = 0.5;
    double D = 0.5;
    double K = 1;
    double T0 = 1;
    double TD = 1;
    double T = 1;

    double q1 = K * (TD / T0 + 1);
    double q2 = -K * (-T0 / T + 1 + 2 * TD / T0);
    double q3 = K * (TD / T0);
};

class ControlSystem
{
public:
    explicit ControlSystem(const ModelParameters &params) : parameters(params), start_temperature(0.0), desired_temperature(0.0) {}

    void run()
    {
        cout << "Enter start temperature: ";
        cin >> start_temperature;

        temperature.push_back(start_temperature);
        error.push_back(desired_temperature - start_temperature);

        double u_k_minus_1 = 0.0;

        cout << "Enter desired temperature: ";
        cin >> desired_temperature;

        cout << "Current temperature: " << temperature.back() << endl;

        int iterations = 0;
        while (abs(desired_temperature - temperature.at(temperature.size() - 1)) > tolerance && iterations < max_iterations)
        {
            error.push_back(desired_temperature - temperature.at(temperature.size() - 1));
            temperature.push_back(parameters.A * temperature.at(temperature.size() - 1) - parameters.B * temperature.at(temperature.size() - 2) + parameters.C + parameters.D * sin(u_k_minus_1));
            cout << "Current temperature: " << temperature.back() << endl;
            iterations++;
        }

        if (iterations >= max_iterations)
        {
            cout << "Maximum number of iterations reached. Consider adjusting the parameters." << endl;
        }
        else
        {
            cout << "Temperature reached the desired value within tolerance." << endl;
        }
    }

private:
    const ModelParameters &parameters;
    double start_temperature;
    double desired_temperature;
    vector<double> temperature;
    vector<double> error;
    const double tolerance = 0.1;
    const int max_iterations = 1000;
};

int main()
{
    ModelParameters params;
    ControlSystem control_system(params);
    control_system.run();
    return 0;
}
