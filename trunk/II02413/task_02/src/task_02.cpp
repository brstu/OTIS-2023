#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

class MyFunction
{
public:
    double calculateSummary()
    {
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += q[i] * error[i];
        }
        return sum;
    }

    void nonlinearSystem(int time, double target, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7)
    {
        for (int i = 0; i < time; i++)
        {
            error[0] = target - output[output.size() - 3];
            error[1] = target - output[output.size() - 2];
            error[2] = target - output[output.size() - 1];
            input[0] = input[1] + calculateSummary();
            output.push_back(a * output[output.size() - 1] - b * output[output.size() - 2] * output[output.size() - 2] + c * input[0] + d * sin(input[1]));
            input[1] = input[0];
        }
    }

    std::vector<double> getOutput() const
    {
        return output;
    }

private:
    double k = 0.01;
    double t = 40;
    double td = 100;
    double t0 = 1;

    double q0 = k * (1 + td / t0);
    double q1 = -k * (1 + 2 * td / t0 - t0 / t);
    double q2 = k * td / t0;

    std::vector<double> q = {q0, q1, q2};
    std::vector<double> error = {0, 0, 0};
    std::vector<double> output = {0, 0, 0};
    std::vector<double> input = {1, 1};
};

int main()
{
    double target;
    std::ofstream out("output.txt");
    MyFunction myFunction;

    if (out.is_open())
    {
        std::cout << "Enter the target: ";
        std::cin >> target;
        myFunction.nonlinearSystem(100, target);

        std::vector<double> outputValues = myFunction.getOutput();

        for (size_t i = 0; i < outputValues.size(); i++)
        {
            double scaledValue = outputValues[i] * target / outputValues[outputValues.size() - 1];
            std::cout << i << " " << scaledValue << std::endl;
            out << i << " " << scaledValue << std::endl;
        }

        out.close();
    }
    else
    {
        std::cerr << "Error: Cannot open the output file." << std::endl;
    }

    return 0;
}
