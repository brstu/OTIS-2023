#include <iostream>
#include <vector>
#include <cmath>

void pid_regulator(double A, double B, double C, double D, double K, double T0, double TD, double T, double W, double YS) {
	double q0 = K * (1 + (TD / T0));
	double q1 = -K * (1 + 2 * (TD / T0) - (T0 / T));
	double q2 = K * (TD / T0);
	std::vector<double> y = { YS, YS };
	double U = 1.0;
	std::vector<double> E = { W - YS, W - YS };
	std::vector<double> um = { U, U };

	while (std::abs(y.back() - W) > 0.01) {
		E.push_back(W - y.back());
		U = um[um.size()-1] + q0 * E.back() + q1 * E[E.size() - 2] + q2 * E[E.size() - 3];
		y.push_back(A * y.back() - B * y[y.size() - 2] + C * U + D * std::sin(um[um.size() - 1]));
		um.push_back(U);
	}

	for (int i=0; i < y.size(); i++) {
		std::cout << i+1 << ";" << y[i] << ";" << E[i] << ";" << um[i] << std::endl;
	}

}

void main() {
	double A, B, C, D, K, T0, TD, T, W, YS;
	A = 0.5;
	B = 0.6;
	C = 0.6;
	D = 0.6;
	K = 0.8;
	T0 = 1.1;
	TD = 1.0;
	T = 1.1;
	YS = 2.0;
	W = 20;
	pid_regulator(A, B, C, D, K, T0, TD, T, W, YS);
}