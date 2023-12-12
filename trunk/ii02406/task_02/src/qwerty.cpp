#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class MyModel
{
private:
    double coefficientA;
    double coefficientB;
    double coefficientC;
    double coefficientD;

    double parameter0;
    double parameter1;
    double parameter2;

    vector<double> parameters;
    vector<double> residuals = { 0, 0, 0 };
    vector<double> states = { 0, 0, 0 };
    vector<double> variables = { 1, 1 };

public:
    MyModel(double a, double b, double c, double d)
        : coefficientA(a), coefficientB(b), coefficientC(c), coefficientD(d), parameter0(coefficientA* (1 + coefficientC / coefficientD)),
        parameter1(-coefficientA * (1 + 2 * coefficientC / coefficientD - coefficientD / coefficientB)), parameter2(coefficientA* coefficientC / coefficientD),
        parameters({ parameter0, parameter1, parameter2 }) {}

    double calculateTotal()
    {
        double total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += parameters[i] * residuals[i];
        }
        return total;
    }

    void simulate(int steps, double target, double x = 0.5, double y = 0.3, double w = 0.9, double s = 0.7)
    {
        for (int i = 0; i < steps; i++)
        {
            residuals[0] = target - states[states.size() - 1];
            residuals[1] = target - states[states.size() - 2];
            residuals[2] = target - states[states.size() - 3];
            variables[0] = variables[1] + calculateTotal();
            states.push_back(x * states[states.size() - 1] - y * states[states.size() - 2] * states[states.size() - 2] + w * variables[0] + s * sin(variables[1]));
            variables[1] = variables[0];
        }
    }

    vector<double> getStates() const
    {
        return states;
    }
};

int main()
{
    double target;
    MyModel model(0.0001, 100, 100, 1);

    cout << "Введите целевое значение: ";
    cin >> target;
    model.simulate(100, target);
    vector<double> stateValues = model.getStates();

    for (int i = 0; i < stateValues.size(); i++)
    {
        double scaledValue = stateValues[i] * target / stateValues[stateValues.size() - 1];
        cout << i << " " << scaledValue << endl;
    }

    return 0;
}