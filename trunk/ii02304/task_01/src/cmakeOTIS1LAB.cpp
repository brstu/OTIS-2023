#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

float a = 1.0;
float b = 0.5;
float c = 0.001;
float d = 0.999;
float ylin = 0;
float ylin1;
float ulin = 1.0;
float n = 0;
float y;
float y_prev;
int t = 10;

void linmodel(float a, float b, float c, float d, float ylin, float ylin1, float ulin) {
	float ylinmodel[1000];
	ylin1 = a * ylin + b * ulin;
	ylinmodel[0] = ylin;
	cout << "Linear model:" << endl;
	cout << ylinmodel[0] << endl;
	for (int i = 0; i <= t; i++) {
		ylinmodel[i + 1] = a * ylinmodel[i] + b * ulin;
		cout << ylinmodel[i + 1] << endl;
	}
};

void nonlinear(float a, float b, float c, float d, float ulin, float y, float y_prev) {
	float ynonlinmodel[1000];
	cout << endl << "Nonlinear model:" << endl;
	ynonlinmodel[0] = 0;
	cout << ynonlinmodel[0] << endl;
	for (int i = 0; i <= t; i++) {
		if (i == 1) {
			y = 1.2;
			y_prev = y;
			y = a * y + c * ulin + d * sin(ulin);
		}
		if (i <= t) {
			ynonlinmodel[i + 1] = a * y - b * pow(y_prev, 2) + c * ulin + d * sin(ulin);
			y_prev = y;
			y = ynonlinmodel[i + 1];
			cout << ynonlinmodel[i + 1] << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	float ylinmodel[1000], ynonlinmodel[1000];
	linmodel(a, b, c, d, ylin, ylin1, ulin);
	nonlinear(a, b, c, d, ulin, y, y_prev);
	return 0;
}