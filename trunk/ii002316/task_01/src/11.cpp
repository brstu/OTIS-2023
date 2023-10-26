#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

const double alpha = 0.5;
const double beta2 = 0.5;
const double gamma = 0.5;
const double delta = 0.5; //some constants

void customLinear(double y, double u, double i, double t) {
	if (i != t) {
		ofstream outputFile("custom_lin.txt", ios::app);
		outputFile << i << " " << y << endl;
		cout << y << endl;
		customLinear(alpha * y + beta2 * u, u, i + 1, t);
	}
	else {
		cout << "end custom linear\n";
	}
}

void customNonlinear(double y, double y1, double u, double i, double t) {
	if (i == 1) {
		ofstream outputFile("custom_nonlin.txt", ios::app);
		outputFile << i << " " << y << endl;
		cout << y << endl;
		customNonlinear(alpha * y - beta2 * y1 * y1 + (double)gamma * 0.0 + delta * sin(0), y, u, i + 1, t);
	}
	else if (i != t) {
		ofstream outputFile("custom_nonlin.txt", ios::app);
		outputFile << i << " " << y << endl;
		cout << y << endl;
		customNonlinear(alpha * y - beta2 * y1 * y1 + (double)gamma * u + delta * sin(u), y, u, i + 1, t);
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

	cout << "custom linear model: \n";
	customLinear(y, u, i, t);
	cout << "custom nonlinear model: \n";
	customNonlinear(y, y, u, i, t);
}
