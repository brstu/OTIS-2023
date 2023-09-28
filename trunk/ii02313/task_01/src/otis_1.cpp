#include <iostream>
#include <cmath>

using namespace std;

class Function {
private:
	double a = 0.6, b = 0.5, c = 0.65, d = 1.1, u = 4.1;
public:
	double func2(double prev) {
		double next = a * prev + b * u;
		return next;
	}

	double func3(double prev) {
		double next = a * prev - prev * prev * b + u * c + d * sin(u);
		return next;
	}
};




int main()
{
	double y1 = 0.6, prev1 = y1, prev2 = y1;
	int t;
	cout << "Enter t: ";
	cin >> t;
	Function f;
	for (int i = 0; i < t; i++) {
		cout << i << ";" << f.func2(prev1) << ";" << f.func3(prev2)<< endl;
		prev1 = f.func2(prev1);
		prev2 = f.func3(prev2);
	}
	return 0;
}