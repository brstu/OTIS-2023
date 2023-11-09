#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

struct PID {
	
	double y0;
	double y1;

	double e0;
	double e1;
	double e2;

	double u0;
	double u1;

	void next_val(double& x0, double& x1, double next) const
	{
		x0 = x1;
		x1 = next;
	}

	void next_val1(double& x0, double& x1, double& x2, double next) const
	{
		x0 = x1;
		x1 = x2;
		x2 = next;
	}

	double K ;
	double T ;
	double TD;
	double T0;
	double funk0(double& K, double& TD, double& T0) const 
	{
		 K = 0.9;
		 TD = 1.01;
		 T0 = 1.34;
		double q0 = K * (1 + TD / T0);
		return q0;

	}

	double funk1(double& K, double& TD, double& T0,double& T) const
	{
		 K = 0.9;
		 T = 1.1;
		 TD = 1.01;
		 T0 = 1.34;
		 double q1 = -K * (1 + 2 * TD / T0 - T0 / T);		
		return q1;

	}

	double funk2(double& K, double& TD, double& T0) const
	{

		K = 0.9;
		TD = 1.01;
		T0 = 1.34;
		double q2 = K * TD / T0;
		return q2;
	}	
	double A;
	double B;
	double C;
	double D;
	double U;
	double W;
	void function_cout(double val_y1, double val_y0)
	{
		A = 0.5;
		B = 0.5;
		C = 0.35;
		D = 1.1;
		U = 4.1;
		W = 30;
		int i = 0;
		y0 = val_y0;
		y1 = val_y1;
		e0 = 0;
		e1 = W - val_y0;
		e2 = W - val_y1;
		u0 = 1;
		u1 = 1;

		cout << "Function E is " << setw(25) << "Function Y is " << setw(28) << "Function U is" << endl;

		while (abs(W - y1) > 0.01)
		{
			cout << i << " ";
			printf("%.4f", e2);
			cout << setw(20);
			next_val1(e0, e1, e2, W - y1);
			U = u1 + funk0(K, TD, T0) * e2 + funk1(K, TD, T0, T) * e1 + funk2(K, TD, T0) * e0;
			double next = A * y1 - B * y0 + C * U + D * sin(u1);
			cout << i << " ";
			printf("%.4f", y1);
			cout << setw(20);
			next_val(y0, y1, next);
			cout << i << " ";
			printf("%.4f", u1);
			cout << endl;
			next_val(u0, u1, U);
			i++;

		}
	}
	
	

};

int main()
{
	double val_y1 = 1;
	double val_y0 = 0.1;

	PID func; 
	func.function_cout(val_y1, val_y0); 
	
	return 0;
}
