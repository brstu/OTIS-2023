#include <iostream>
#include <vector>
#include <cmath>

class Iche {
public:
	double a = 0.5;
	double b = 0.7;
	double c = 1.25;
	double d = 0.1;
	double u = 1.5;
	int t = 50;
	std::vector<double>y{ 1.1 };
	std::vector<double>yy{ 1.1 };
	void linear_f(){
		double y_1 = a * y.back() + b * u;
		y.push_back(y_1);
	}
	void non_linear_f(){
		double y_1 = a * yy.back() - b * pow(yy.back(), 2) + c * u + d * sin(u);
		yy.push_back(y_1);
	}
};

int main() {
	Iche linear;
	for (int i = 0; i < linear.t; i++) {
		linear.linear_f();
	}

	for (int i = 0; i < linear.t; i++) {
		linear.non_linear_f();
	}

	for (int i = 0; i < linear.y.size(); i++) {
		std::cout << linear.y[i] << " ";
		std::cout << linear.yy[i] << std::endl;
	}
	return 0;
}
