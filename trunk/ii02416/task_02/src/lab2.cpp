#include <iostream>
#include <vector>

class pid
{
public:
   std::vector<double> a2;
   double i = 0;
   double p_err = 0;
   double pid_c(double k_p, double k_i, double k_d, double val, double c_val,double dt)
   {
      double err = val - c_val;
      double p = err;
      i = i + err * dt;
      double d = (err - p_err) / dt;
      double c_sig = p * k_p + i * k_i + d * k_d;
      p_err = err;
      double buff = c_sig - c_val;
      a2.push_back(buff);
      return c_sig;
   }

   void lin(double y_c, double u, double t, double dt, double setting)
   {
      double a = 0.925;
      double b = 0.75;
      double k_p = 0.19;
      double k_i = 0.27;
      double k_d = 0.0006;
      double y_next = 0;
      std::vector<double> a1;
      std::vector<double> a3(static_cast<size_t>(t), setting);
      a1.push_back(y_c);
      for (int ii = 1; ii <= static_cast<int>(t); ii++)
      {
         if (ii % static_cast<int>(dt) == 0)
         {
            double y = pid_c(k_p, k_i, k_d, setting, y_c, dt);
            y_next = a * y + b * u;
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
      std::cout << "value:\n";
      for (int ii = 0; ii < a1.size(); ii++)
      {
         std::cout << a1[ii] << ",";
      }
      std::cout << "\n\nsignal:\n";
      for (int ii = 0; ii < a1.size() - a2.size(); ii++)
      {
         a2.push_back(a2.back());
      }
      for (int ii = 0; ii < a2.size(); ii++)
      {
         std::cout << a2[ii] << ",";
      }
      std::cout << "\n\nsetting:\n";
      for (size_t ii = 0; ii < a3.size(); ii++) // Use 'size_t' for the loop variable
      {
         std::cout << a3[ii] << ",";
      }
   }
};

int main()
{
   pid T;
   std::cout << "setting:\n";
   double setting;
   std::cin >> setting;
   std::cout << "duration:\n";
   double duration;
   std::cin >> duration;
   std::cout << "discretization value:\n";
   double dis_time;
   std::cin >> dis_time;
   T.lin(0, 0, duration, dis_time, static_cast<size_t>(setting));
   return 0;
}