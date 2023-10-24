#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

class Function
{
public:
    double summary()
    {
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += q[i] * e[i];
        }
        return sum;
    }

    void nonlinear(int time, double goal, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7)
    {
        for (int i = 0; i < time; i++)
        {
            e[0] = goal - y[y.size() - 3];
            e[1] = goal - y[y.size() - 2];
            e[2] = goal - y[y.size() - 1];
            u[0] = u[1] + summary();
            y.push_back(a * y[y.size() - 1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
            u[1] = u[0];
        }
    }

    std::vector<double> getY() const
    {
        return y;
    }

private:
    double k = 0.0001;
    double t = 100;
    double td = 100;
    double t0 = 1;

    double q0 = k * (1 + td / t0);
    double q1 = -k * (1 + 2 * td / t0 - t0 / t);
    double q2 = k * td / t0;

    std::vector<double> q = { q0, q1, q2 };
    std::vector<double> e = { 0, 0, 0 };
    std::vector<double> y = { 0, 0, 0 };
    std::vector<double> u = { 1, 1 };
};

int main()
{
    double goal;
    std::ofstream out("output.txt");
    Function f;

    if (out.is_open())
    {
        std::cout << "Enter the goal: ";
        std::cin >> goal;
        f.nonlinear(100, goal);

        std::vector<double> y_values = f.getY();

        for (size_t i = 0; i < y_values.size(); i++)
        {
            double ans = y_values[i] * goal / y_values[y_values.size() - 1];
            std::cout << i << " " << ans << std::endl;
            out << i << " " << ans << std::endl;
        }

        out.close();
    }
    else
    {
        std::cerr << "Error: Cannot open the output file." << std::endl;
    }

    return 0;
}
