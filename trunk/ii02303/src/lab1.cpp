//Task is to write program, which simulates this object temperature.

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;


const double u = 1; //input warm
const double t = 111; //end time
const double a = 0.3;
const double b = 0.3;
const double c = 0.3;
const double d = 0.3;//some constants


void linmodel(double y, double i) {

	if (i != t) {
		ofstream file("lin.txt", ios::app);
		file << i << " " << y << endl;
		++i;
		cout << y << endl;
		linmodel(a * y + b * u, i);
	}
	else {
		cout << "completion linmodel\n\n";
	}
}
void nonlinmodel(double y, double y1, double i) {

	if (i != t) {
		ofstream file("nonlin.txt", ios::app);
		file << i << " " << y << endl;
		cout << y << endl;
		++i;
		nonlinmodel(a * y - b * y1 * y1 + c * u + d * sin(u), y, i);
	}
	else {
		cout << "completion nonlinmodel\n" << endl;
	}
}


int main() {
	double i = 1; //start time
	double y = 0, y1 = 0;
	ofstream file1("lin.txt");
	ofstream file2("nonlin.txt");
	file1.clear();
	file2.clear();
	cout << "linear model: \n";
	linmodel(0, i);
	cout << "nonlinear model: \n";
	nonlinmodel(0, 0, i);
}