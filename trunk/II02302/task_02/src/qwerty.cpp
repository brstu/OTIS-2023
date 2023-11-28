#include <iostream>
#include <vector>

using namespace std;

double A = 0.5, B = 0.6, C = 0.6, D = 0.6;
double K = 0.8, T0 = 1.1, TD = 1.0, T = 1.1, w = 20;
double q0 = K * (1 + (TD / T0)),
	   q1 = -K * (1 + 2 * (TD / T0) - (T0 / T)), 
	   q2 = K * (TD / T0);


void unliner() {

	const short int y_start = 2;
	vector<double> y = { y_start, y_start };
	double u = 1.0;
	vector<double> e = { w - y_start, w - y_start };
	vector<double> u_pr = {u, u};

	while (abs(w - y.back()) > 0.01)
	{
		e.push_back(w - y.back());
		u = u_pr.back() + q0 * e.back() + q1 * e[e.size() - 2] + q2 * e[e.size() - 3];
		y.push_back(A * y.back() - B * y[y.size() - 2] + C * u + D * sin(u_pr.back()));
		u_pr.push_back(u);
	}
	cout << "y\te\tu_pr\n";
	for (int i = 0; i < y.size(); i++)
		cout << i + 1 << ";" << y[i] << ";" << e[i] << ";" << u_pr[i] << endl;

}

int main() {
	unliner();
}