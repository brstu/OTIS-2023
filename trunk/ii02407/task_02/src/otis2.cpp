#include <iostream>
#include <vector>

int main() {
<<<<<<< HEAD
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
=======
>>>>>>> 8ae2172f2d44ec9be324000edd6318bb1a0a862e
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

<<<<<<< HEAD
=======
    setlocale(LC_ALL, "ru");
    std::cout << std::endl;
    NonLinearModelParams params;
    params.K0 = 1;
    params.time = 10;
    params.alpha = 0.002;
    params.beta = 0.005;
    params.gamma = 0.45;
    params.delta = 0.007;
    params.y_nonLin1 = 0.2;
    params.y_nonLin2 = 0.04;
    params.t_nonLin1 = 0.1;
    params.t_nonLin0 = 0.0025;
    params.Q = 0.04;
    params.P = 0.01;
    params.TD = 1.7;
    params.j = 1.5;
    calculateNonLinearModel(params);
>>>>>>> 8ae2172f2d44ec9be324000edd6318bb1a0a862e
    return 0;
}
