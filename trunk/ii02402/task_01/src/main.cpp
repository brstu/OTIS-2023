#include <iostream>
#include <cmath>

using namespace std;

class Simulation {
private:
    double p1;
    double p2;
    double p3;
    double p4;
    double input;
public:
    Simulation(double p1, double p2, double p3, double p4, double input) : p1(p1), p2(p2), p3(p3), p4(p4), input(input) {}
    virtual ~Simulation() {}
    virtual void compute(double& temperature) = 0;
};

class LinearSimulation : public Simulation {
public:
    using Simulation::Simulation;
    virtual ~LinearSimulation() {}
    void compute(double& temperature) override {
        temperature = p1 * temperature + p2 * input;
        cout << temperature << endl;
    }
};

class NonlinearSimulation : public Simulation {
private:
    double previousTemperature;
    bool isFirstRun = true;
public:
    using Simulation::Simulation;
    virtual ~NonlinearSimulation() {}
    void compute(double& temperature) override {
        if (isFirstRun)
        {
            previousTemperature = temperature;
            temperature = p1 * temperature + p3 * input + p4 * sin(input);
            cout << temperature << endl;
            isFirstRun = false;
        }
        else
        {
            double tempBuffer;
            tempBuffer = p1 * temperature - p2 * pow(previousTemperature, 2) + p3 * input + p4 * sin(input);
            previousTemperature = temperature;
            temperature = tempBuffer;
            cout << temperature << endl;
        }
    }
};

int main()
{
    double initialTempLinear, initialTempNonlinear;
    cout << "Введите начальную температуру: ";
    cin >> initialTempLinear;
    initialTempNonlinear = initialTempLinear;

    LinearSimulation linear(0.5, 1.0, 0.15, 0.3, 1.2);
    NonlinearSimulation nonlinear(0.5, 1.0, 0.15, 0.3, 1.2);

    int numIterations = 10;

    cout << "Результаты линейной симуляции\n" << initialTempLinear << endl;
    for (int i = 0; i < numIterations; i++)
        linear.compute(initialTempLinear);

    cout << endl << "Результаты нелинейной симуляции\n" << initialTempNonlinear << endl;
    for (int i = 0; i < numIterations; i++)
        nonlinear.compute(initialTempNonlinear);

    return 0;
}