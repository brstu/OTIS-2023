#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Model
{
  private:
	double A;
	double B;
	double C;
	double D;

	double p_0;
	double p_1;
	double p_2;

	vector<double> p;
	vector<double> r;
	vector<double> z;
	vector<double> v;

  public:
	Model(double a, double b, double c, double d)
		: A(a), B(b), C(c), D(d), p_0(A * (1 + C / D)),
		  p_1(-A * (1 + 2 * C / D - D / B)), p_2(A * C / D),
		  p({p_0, p_1, p_2}), r({0, 0, 0}), z({0, 0, 0}), v({1, 1}) {}

	double total()
	{
		double total = 0;
		for (int i = 0; i < 3; i++)
		{
			total += p[i] * r[i];
		}
		return total;
	}

	void nonlinear(int steps, double target, double x = 0.5, double y = 0.3, double w = 0.9, double s = 0.7)
	{
		for (int i = 0; i < steps; i++)
		{
			r[0] = target - z[z.size() - 1];
			r[1] = target - z[z.size() - 2];
			r[2] = target - z[z.size() - 3];
			v[0] = v[1] + total();
			z.push_back(x * z[z.size() - 1] - y * z[z.size() - 2] * z[z.size() - 2] + w * v[0] + s * sin(v[1]));
			v[1] = v[0];
		}
	}

	vector<double> getZ() const
	{
		return z;
	}
};

int main()
{
	double target;
	Model m(0.0001, 100, 100, 1);

	cout << "Введите целевое значение: ";
	cin >> target;
	m.nonlinear(100, target);
	vector<double> z_values = m.getZ();

	for (int i = 0; i < z_values.size(); i++)
	{
		double scaledValue = z_values[i] * target / z_values[z_values.size() - 1];
		cout << i << " " << scaledValue << endl;
	}

	return 0;
}
