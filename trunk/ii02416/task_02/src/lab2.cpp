#include<iostream>
#include<vector>
using namespace std;

class pid
{
private:
   vector<double>a2;
   double i=0,p_err=0;
public:
   double pid_c (double k_p,double k_i,double k_d,double val,double c_val,double dt)
   {
      double err = val - c_val;
      double p = err;
      i = i + err*dt; 
      double d = (err - p_err) / dt;
      double c_sig= p * k_p + i * k_i + d * k_d;
      p_err = err;
      double buff=c_sig-c_val;
      a2.push_back(buff);
      return c_sig;
   }
   
   void lin(double y_c, double u, double t, double dt, double setting)
   {
      double a = 0.925, b = 0.75, k_p = 0.19, k_i = 0.27, k_d = 0.0006, y_next=0;
      vector<double>a1,a3(t,setting);
      a1.push_back(y_c);
      for(int i=1;i<=(int)t;i++)
      {
         if (i%(int)dt==0)
         {
            double y=pid_c(k_p,k_i,k_d, setting, y_c, dt);
            y_next = a * y  + b * u;
            a1.push_back(y_next);
            y_c = y_next;
         }
         else
         {
            y_next = a * y_next + b * u;
            a1.push_back(y_next);
            y_c = y_next;
         }
      }
      cout<<"value:\n";
      for(int i=0;i<a1.size();i++)
      {
         cout<<a1[i]<<",";
      }
      cout<<"\n\nsignal:\n";
      for(int i = 0; i < a1.size()-a2.size(); i++){
         a2.push_back(a2.back());
      }
      for(int i=0;i<a2.size();i++)
      {
         cout<<a2[i]<<",";
      }
      cout<<"\n\nsetting:\n";
      for(int i=0;i<a3.size();i++)
      {
         cout<<a3[i]<<",";
      }
   }
};

int main() {
   pid T;
   cout<<"setting:\n";
   double setting;       
   cin>>setting;
   cout<<"duration:\n";
   double duration;
   cin>>duration;
   cout<<"discretization value:\n";
   double dis_time;
   cin>>dis_time;
   T.lin(0, 0, duration, dis_time, setting);
   return 0;
}
