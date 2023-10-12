#include <iostream>
#include <cmath>

using namespace std;

class Function {
private:
	double a = 0.6;
	double b = 0.5;
	double c = 0.65;
	double d = 1.1;
	double u = 4.1;
public:
	const double func2(double prev) {
		double next = a * prev + b * u;
		return next;
	}

	const double func3(double cur, double prev) {
		double next = a * cur - prev * prev * b + u * c + d * sin(u);
		return next;
	}
};


int main()
{
	double y1 = 0.6;
	double cur1 = y1;
	double cur2 = y1;
	double prev2 = y1;
	int t;
	cout << "Enter t: ";
	cin >> t;
	Function f;
	for (int i = 0; i < t; i++) {
		cur1 = f.func2(cur1);
		double temp = cur2;
		cur2 = f.func3(cur2, prev2);
		prev2 = temp;
		cout << i << ";" << cur1 << ";" << cur2 << endl;
	}
	return 0;
}