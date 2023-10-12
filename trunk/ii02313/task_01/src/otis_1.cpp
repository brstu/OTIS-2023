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

	double func3(double cur, double prev) {
		double next = a * cur - prev * prev * b + u * c + d * sin(u);
		return next;
	}
};




int main()
{
	double y1 = 0.6,
		   cur1 = y1, cur2 = y1, prev2 = y1;
	int t;
	cout << "Enter t: ";
	cin >> t;
	Function f;
	for (int i = 0; i < t; i++) {
		cur1 = f.func2(cur1);
		int temp = cur2;
		cur2 = f.func3(cur2, prev2);
		prev2 = temp;
		cout << i << ";" << cur1 << ";" << cur2 << endl;
	}
	return 0;
}