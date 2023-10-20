#include <iostream>

using namespace std;

double a = 0.5,
b = 1,
c = 0.15,
d = 0.3,
u = 1.2;


void liner(double& y1)
{
	y1 = a * y1 + b * u;
	cout << y1 << endl;
}

void unliner(double& y2, double& y_pr, bool& second_iteration)
{
	if (second_iteration)
	{
		y_pr = y2;
		y2 = a * y2 + c * u + d * sin(u); 
		cout << y2 << endl;
		second_iteration = false;
	}
	else
	{
		double buf;
		buf = a * y2 - b * pow(y_pr, 2) + c * u + d * sin(u);
		y_pr = y2;
		y2 = buf;
		cout << y2 << endl;
	}
}


int main()
{
	double y1, y2, y_pr;
	bool second_iteration = true;
	cout << "Input temperature: ";
	cin >> y1;
	y2 = y1;
	int n = 10;
	cout << "Liner model\n" << y1 << endl;
	for (int i = 0; i < n; i++)
		liner(y1);
	cout << endl << "Unliner model\n" << y2 << endl;
	for (int i = 0; i < n; i++)
		unliner(y2, y_pr, second_iteration);
}