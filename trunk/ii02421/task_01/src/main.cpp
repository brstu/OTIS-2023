#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const double lin[2] = {0.34, 2};
const double nonLin[4] = {0.87, 0.45, 0.64, -0.5};
const double u = 1.95;
const int t = 50;

void linearFunction(int t, double a, double b, double u){
   vector <double> y(t);

   for(int i = 0; i < t; i++) {
       if (i <= 0) {
           y[i] = 0;
       } else {
           y[i] = a * y[i - 1] + b * u;
       }
   }

   cout << "Linear:\n";

   for(int i = 0; i < t; i++)
      cout << y[i] << endl;
}

void nonLinearFunction(int t, double a, double b, double c, double d, double u){
   vector <double> y(t);

   for(int i = 0; i<t; i++) {
       if (i <= 0) {
           y[i] = a * 0 - b * pow(0, 2) + c * u + d * sin(u);
       } else {
           y[i] = a * y[i - 1] - b * pow(y[i - 2], 2) + c * u + d * sin(u);
       }
   }

   cout << "\nNon Linear:\n" << endl;

   for(int i = 0; i < t; i++)
      cout << y[i] << endl;
   cout << endl;
}

int main() {
   linearFunction(t, lin[0], lin[1], u);
   nonLinearFunction(t, nonLin[0], nonLin[1], nonLin[2], nonLin[3], u);

   return 0;
}