#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

const double a1=0.75;
const double b1=0.87;
const double a2=-0.1;
const double b2=0.45;
const double c2=0.64;
const double d2=-0.5;
const double u=1.95;
const double u2=3.5;
const int t=50;

void linfunc(double a, double b)
{
   vector<double>y(t);
   for(int i=0;i<t;i++)
      if(i<=0)
         y[i]=0;
      else
         y[i]=a*y[i-1]+b*u;    
   cout<<"linear:\n";
   for(int i = 0; i < t; i++)
      cout<<y[i]<<endl;
}

void unlinfunc(double a, double b, double c, double d)
{
   vector<double>y2(t);
   for(int i=0;i<t;i++)
      if(i<=0)
         y2[i]=0;
      else
         y2[i]=a*y2[i-1]-b*pow(y2[i-2],2)+c*u2+d*sin(u2);
   cout<<"----------------------\nunlinear:\n";
   for(int i = 0; i < t; i++)
      cout<<y2[i]<<endl;
   cout<<endl;
}

int main() {
   linfunc(a1,b1);
   unlinfunc(a2,b2,c2,d2);
   return 0;
}