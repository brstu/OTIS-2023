#include <cmath>
#include <iostream>

const double a = 0.5;
const double b = 0.5;
const double c = 0.66;
const double d = 0.8;
const double u = 4.0;

double func2(double prev) {
	double next = a * prev + b * u;
	return next;
}

double func3(double prev) {
	double next = a * prev - prev * prev * b + u * c + d * sin(u);
	return next;
}

int main()
{
	double y1 = 0.6, prev1 = y1, prev2 = y1;
	int t;
	std::cout << "Enter t: ";
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cout << i << "; " << func2(prev1) << "; " << func3(prev2) << std::endl;
		prev1 = func2(prev1);
		prev2 = func3(prev2);
	}
	return 0;
}
