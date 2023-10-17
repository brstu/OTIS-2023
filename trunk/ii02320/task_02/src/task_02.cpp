#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

const double K = 0.0001, T=100, T_D = 100, T_0 = 1;

const double q_0 = K * (1 + T_D / T_0);
const double q_1 = -K * (1 + 2 * T_D / T_0 - T_0 / T);
const double q_2 = K * T_D / T_0;

double q[3] = { q_0,q_1,q_2 };
double e[3] = { 0,0,0 };
vector<double> y = { 0,0,0 };
double u[2] = { 1,1 };

double sum() {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += q[i] * e[i];
	}
	return sum;
}

void nonlin(int time, double w, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7) {
	int i = 0;
	while (i < time) {
		e[0] = w - y[y.size()-1];
		e[1] = w - y[y.size()-2];
		e[2] = w - y[y.size()-3];
		u[0] = u[1] + sum();
		y.push_back(a * y[y.size()-1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
		u[1] = u[0];
		i++;
	}
}

int main()
{
	double w;
	ofstream out("output.txt");
	cin >> w;
	nonlin(1000,w);
	for (int i = 0; i < y.size(); i++) {
		cout << i << " " << y[i] * w / y[y.size() - 1] << endl;
		out  << i << " " << y[i] * w / y[y.size() - 1] << endl;
	}
	return 0;
}
