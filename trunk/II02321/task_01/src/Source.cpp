#include <iostream>
#include <fstream>

using namespace std;
double f1(double y, double u) {
	double a = 0.6;
	double b = 0.5;
	return a * y + b * u;
}
double f2(double y, double u, double y1) {
	double a = 0.6;
	double b = 0.5;
	double c = 0.62;
	double d = 1.1;
	return a * y - b * pow(y1, 2) + c * u + d*sin(u);
}
void main() {
	ofstream os("output.txt");
	double y1, u;
	cin >> y1 >> u;
	double y2 = y1;
	double y22 = y1;
	int i = 0;
	os << i << " " << y1 << " " << y2 << endl;
	y1 = f1(y1, u);
	y2 = f2(y2, u, y22);
	i++;
	os << i << " " << y1 << " " << y2 << endl;
	for (i = 2; i < 100; i++)
	{
		y1 = f1(y1, u);
		y2 = f2(y2, u, y22);
		y22 = y2;
		os << i << " " << y1 << " " << y2 << endl;
	}
}