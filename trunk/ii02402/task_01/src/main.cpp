#include <iostream>
#include <vector>
#include <cmath>

// Используйте std:: перед идентификаторами из стандартной библиотеки
using std::cout;
using std::endl;
using std::vector;

vector<double> simulate_linear_system(double alpha, double beta, const vector<double>& input_signal) {
    vector<double> system_output(input_signal.size(), 0.0);
    system_output[0] = 0.0;
    for (int t = 1; t < input_signal.size(); ++t) {
        system_output[t] = alpha * system_output[t - 1] + beta * input_signal[t - 1];
    }
    return system_output;
}

vector<double> simulate_nonlinear_system(double alpha, double beta, double gamma, double delta, const vector<double>& input_signal) {
    vector<double> system_output(input_signal.size(), 0.0);
    system_output[0] = 0.0;
    system_output[1] = 0.0;
    for (int t = 2; t < input_signal.size(); ++t) {
        system_output[t] = alpha * system_output[t - 1] - beta * pow(system_output[t - 2], 2) + gamma * input_signal[t - 1] + delta * sin(input_signal[t - 2]);
    }
    return system_output;
}

void print_vector(const vector<double>& vec) {
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    double alpha_linear = 0.8;
    double beta_linear = 0.5;
    vector<double> input_linear = { 1.0, 2.0, 3.0, 4.0 };

    double alpha_nonlinear = 0.8;
    double beta_nonlinear = 0.5;
    double gamma_nonlinear = 0.2;
    double delta_nonlinear = 0.3;
    vector<double> input_nonlinear = { 1.0, 2.0, 3.0, 4.0 };

    vector<double> linear_system_output = simulate_linear_system(alpha_linear, beta_linear, input_linear);
    vector<double> nonlinear_system_output = simulate_nonlinear_system(alpha_nonlinear, beta_nonlinear, gamma_nonlinear, delta_nonlinear, input_nonlinear);

    cout << "Linear system output: ";
    print_vector(linear_system_output);

    cout << "Nonlinear system output: ";
    print_vector(nonlinear_system_output);

    return 0;
}
