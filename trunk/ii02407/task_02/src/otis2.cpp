#include <iostream>
#include <vector>

int main() {
    // pid setups
    double kp = 10;
    double ki = 1;
    double kd = 2;
    double t = 0;
    double dt = 1;
    double T = 10;
    double setpoint = 500;
    double in = 0;
    double prevErr = 0;

    // models setups
    double a = 0.5;
    double b = 0.04;

    std::vector<double> outs;
    std::vector<double> results;
    std::vector<double> times;
    std::vector<double> setpoints;
    while (T >= t) {
        // count pid coefficients
        double err = setpoint - in;
        double out = ki * err + ki * err * dt + kd * (err - prevErr) / dt;
        prevErr = err;
        //write data in arrays to draw a graph
        results.push_back(in);
        times.push_back(t);
        outs.push_back(out);
        setpoints.push_back(setpoint);

        in = a * in + b * out;
        t += dt;
    }

    for (double result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}
