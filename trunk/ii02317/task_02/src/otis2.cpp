#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

class PidRegulator {
private:
    double K = 0.001;
    double T = 100;
    double Td = 100;
    double h = 1;
    
    double q0 = K * (1 + Td / h);
    double q1 = -K * (1 + 2 * Td / h - h / T);
    double q2 = (K * Td) / h;
    
    vector<double> q = {q0, q1, q2};
    vector<double> e = {0, 0, 0};
    vector<double> y = {0, 0, 0};
    vector<double> u = {1, 1};
public:
    double sum() {
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += q[i] * e[i];
        }
        return sum;
    }
    void nline(int time, double setpoint, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7) {
        for (int i = 0; i < time; i++) {
            e[0] = setpoint - y[y.size() - 1]; //count e0
            e[1] = setpoint - y[y.size() - 2]; //count e1
            e[2] = setpoint - y[y.size() - 3]; //count e2
            u[0] = u[1] + sum(); //count u
            y.push_back(a * y[y.size() - 1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
            u[1] = u[0];
        }
    }
    vector<double> getY() const{ 
        return y;
    }
};
int main() {
    double value;
    ofstream out("output.txt");
    PidRegulator f;
    if (out.is_open()) {
        cout << "Enter the value: ";
        cin >> value;
        f.nline(100, value);
        vector<double> y_value = f.getY();

        for (int i = 0; i < y_value.size(); i++) {
            double repValue = y_value[i] * value / y_value[y_value.size() - 1];
            cout << i << " " << repValue << endl;
            out << i << " " << value << endl;
        }

        out.close();
    } else {
        cerr << "Error: Cannot open the output file." << std::endl;
    }
    return 0;
}
