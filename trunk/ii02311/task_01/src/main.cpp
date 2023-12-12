#include <iostream>
#include <fstream>
#include <cmath>
int main()
{
	srand(time(NULL));
	const double a = 0.5;
	const double b = 0.5;
	const double c = 0.5;
	const double d = 0.5;
	int n=100;
	double* u = new double[n];
	double* y = new double[n];
	y[0] = 0;
	y[1] = 0;
	for (int i = 0; i < n; i++) {
		u[i] = 1;
	}
	for (int i = 1; i < n; i++) {
		y[i] = a * y[i - 1] + b * u[i - 1];
	}
	std::ofstream out;          
	out.open("outputs.txt");     
	if (out.is_open())
	{
		out << "Linar" << std::endl;
		for (int i = 0; i < 100; i++) {
			out << y[i] << std::endl;
		}
	}
	out.close();
	for (int i = 2; i < n; i++) {
		y[i] = a * y[i - 1] - b * y[i - 2] * y[i - 2] + c * u[i - 1] + d * sin(u[i -2 ]);
	}
	out.open("outputs1.txt");
	if (out.is_open())
	{
		out << "Non-Linar" << std::endl;
		for (int i = 0; i < 100; i++) {
			out << y[i] << std::endl;
		}
	}
	out.close();
}