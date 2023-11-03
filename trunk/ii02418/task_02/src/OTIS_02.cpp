#include <iostream>
#include <vector>
#include <cmath>


int main() {
	
	const double A = 0.5;
	const double B = 0.6;
	const double C = 0.6;
	const double D = 0.6;
	const double K = 0.8;
	const double T0 = 1.1;
	const double TD = 1.0;
	const double T = 1.1;
	const double YS = 2.0;
	const double W = 20;

	double buf = TD / T0;
	double q0 = K * (1 + buf);
	double q1 = -K * (1 + 2 * buf - (T0 / T));
	double q2 = K * buf;
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

	return 0;
}