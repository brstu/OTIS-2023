#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

void customLinear(double alpha, double beta, double y, double u, double i, double t) {
	if (i != t) {
		ofstream outputFile("custom_lin.txt", ios::app);
		outputFile << i << " " << y << endl;
		cout << y << endl;
		customLinear(alpha, beta, alpha * y + beta * u, u, i + 1, t);
	}
	else {
		cout << "end custom linear\n";
	}
}

void customNonlinear(double alpha, double beta, double gamma, double delta, double y, double y1, double u, double i, double t) {
	if (i == 1) {
		ofstream outputFile("custom_nonlin.txt", ios::app);
		outputFile << i << " " << y << endl;
		cout << y << endl;
		customNonlinear(alpha, beta, gamma, delta, alpha * y - beta * y1 * y1 + gamma * 0 + delta * sin(0), y, u, i + 1, t);
	}
	else if (i != t) {
		ofstream outputFile("custom_nonlin.txt", ios::app);
		outputFile << i << " " << y << endl;
		cout << y << endl;
		customNonlinear(alpha, beta, gamma, delta, alpha * y - beta * y1 * y1 + gamma * u + delta * sin(u), y, u, i + 1, t);
	}
	else {
		cout << "end custom nonlinear" << endl;
	}
}

int main() {
	ofstream linearOutputFile("custom_lin.txt");
	ofstream nonlinearOutputFile("custom_nonlin.txt");
	linearOutputFile.clear();
	nonlinearOutputFile.clear();
	double i = 1; //start time
	double y = 0; //input temperature
	double u = 1; //input warm
	double t = 100; //end time
	const double alpha = 0.5;
	const double beta = 0.5;
	const double gamma = 0.5;
	const double delta = 0.5; //some constants
	cout << "custom linear model: \n";
	customLinear(alpha, beta, y, u, i, t);
	cout << "custom nonlinear model: \n";
	customNonlinear(alpha, beta, gamma, delta, y, y, u, i, t);
}
