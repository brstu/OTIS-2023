#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class MyNewModel
{
private:
    double coeffA;
    double coeffB;
    double coeffC;
    double coeffD;

    double param0;
    double param1;
    double param2;

    vector<double> params;
    vector<double> residuals = { 0, 0, 0 };
    vector<double> states = { 0, 0, 0 };
    vector<double> variables = { 1, 1 };

public:
    MyNewModel(double a, double b, double c, double d)
        : coeffA(a), coeffB(b), coeffC(c), coeffD(d), param0(coeffA * (1 + coeffC / coeffD)),
          param1(-coeffA * (1 + 2 * coeffC / coeffD - coeffD / coeffB)), param2(coeffA * coeffC / coeffD),
          params({ param0, param1, param2 }) {}

    double calculateTotalValue()
    {
        double total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += params[i] * residuals[i];
        }
        return total;
    }

    void simulateModel(int steps, double target, double x = 0.5, double y = 0.3, double w = 0.9, double s = 0.7)
    {
        for (int i = 0; i < steps; i++)
        {
            residuals[0] = target - states[states.size() - 1];
            residuals[1] = target - states[states.size() - 2];
            residuals[2] = target - states[states.size() - 3];
            variables[0] = variables[1] + calculateTotalValue();
            states.push_back(x * states[states.size() - 1] - y * states[states.size() - 2] * states[states.size() - 2] + w * variables[0] + s * sin(variables[1]));
            variables[1] = variables[0];
        }
    }

    vector<double> getStateValues() const
    {
        return states;
    }
};

int main()
{
    double target;
    MyNewModel model(0.0001, 100, 100, 1);

    cout << "Enter the target value: ";
    cin >> target;
    model.simulateModel(100, target);
    vector<double> stateValues = model.getStateValues();

    for (int i = 0; i < stateValues.size(); i++)
    {
        double scaledValue = stateValues[i] * target / stateValues[stateValues.size() - 1];
        cout << i << " " << scaledValue << endl;
    }

    return 0;
}