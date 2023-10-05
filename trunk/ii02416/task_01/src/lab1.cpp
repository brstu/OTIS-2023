#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int t=50;
float a1=0.75,b1=0.87,a2=-0.1,b2=0.45,c2=0.64,d2=-0.5,u=1.95,u2=3.5;
vector<float>y(t),y2(t);

void linfunc(float a, float b, int i)
{
   if(i<=0)
      y[i]=0;
   else
      y[i]=a*y[i-1]+b*u;
}

void unlinfunc(float a, float b, float c, float d, int i)
{
   if(i<=0)
      y2[i]=0;
   else
      y2[i]=a*y2[i-1]-b*powf(y2[i-2],2)+c*u2+d*sin(u2);
}

int main() {
   
   for(int i=0;i<t;i++)
   {
      linfunc(a1,b1,i);
   }
   
   for(int i=0;i<t;i++)
   {
      unlinfunc(a2,b2,c2,d2,i);
   }
   
   cout<<"linear:\n";
   for(int i = 0; i < t; i++){
      cout<<y[i]<<endl;
   }
   cout<<"----------------------\nunlinear:\n";
   for(int i = 0; i < t; i++){
      cout<<y2[i]<<endl;
   }
   cout<<endl;
   return 0;
}
