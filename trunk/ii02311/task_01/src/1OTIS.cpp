#include <iostream>
#include <cmath>

using namespace std;

double a = 0.5;
double b = 1;
double c = 0.15;
double d = 0.3;
double u = 1.2;

void liner(double& y1) {
  y1 = a * y1 + b * u;
  cout << y1 << endl;
}

void unliner(double& y2, double& y_prev, bool& second_iteration) {
  if (second_iteration) {
    y_prev = y2;
    y2 = a * y2 + c * u + d * sin(u); 
    cout << y2 << endl;
    second_iteration = false;
  } else {
    double temp;
    temp = a * y2 - b * pow(y_prev, 2) + c * u + d * sin(u);
    y_prev = y2;
    y2 = temp;
    cout << y2 << endl;
  }
}

int main() {
  double y1, y2, y_prev;
  bool second_iteration = true;
  cout << "Введите температуру: ";
  cin >> y1;
  y2 = y1;
  int num_steps = 10;

  cout << "Линейная модель\n" << y1 << endl;
  for (int i = 0; i < num_steps; i++) {
    liner(y1);
  }

  cout << "\nНелинейная модель\n" << y2 << endl;
  for (int i = 0; i < num_steps; i++) {
    unliner(y2, y_prev, second_iteration);
  }
}