#include <iostream>
#include <vector>
#include <cmath>

// Function to calculate PID control
void calculatePID(double kp, double ki, double kd, double dt, double setpoint, double &in, double &prevErr, double &out) {
    double err = setpoint - in;
    out = kp * err + ki * err * dt + kd * (err - prevErr) / dt;
    prevErr = err;
}

// Function to simulate the system with given coefficients
void simulateSystem(double a, double b, double dt, double &in, double out) {
    in = a * in + b * out;
}

int main() {
    // PID setups
    double kp = 10.0;
    double ki = 1.0;
    double kd = 2.0;
    double t = 0.0;
    double dt = 1.0;
    double T = 10.0;
    double setpoint = 500.0;
    double in = 0.0;
    double prevErr = 0.0;
    double out = 0.0;

    // Model setups
    double a = 0.5;
    double b = 0.04;

    // Vectors to store results
    std::vector<double> results;
    std::vector<double> times;
    std::vector<double> outs;
    std::vector<double> setpoints;

    // Simulation loop
    while (T >= t) {
        // Calculate PID control
        calculatePID(kp, ki, kd, dt, setpoint, in, prevErr, out);

        // Store data for plotting
        results.push_back(in);
        times.push_back(t);
        outs.push_back(out);
        setpoints.push_back(setpoint);

        // Simulate the system
        simulateSystem(a, b, dt, in, out);

        t += dt;
    }

    // Print results
    for (const auto &result : results) {
        std::cout << result << " ";
    }

    return 0;
}
