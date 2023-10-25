#include <iostream>
#include <cmath>

struct Modeling_object 
{ 

const double a = 0.05; 
const double b = 1.41;
const double c = 1.15;
const double d = 0.2;
const double u = 0.2;
};

double function1(Modeling_object* model, double y_t) 
{
	return model->a * y_t + model->b * model->u; 
}

double function2(Modeling_object* model, double y_t, double y_t_mines) 
{ 
	return model->a * y_t - model->b * y_t_mines * y_t_mines + model->c * model->u + model->d * sin(model->u);
}
int main() 
{
    Modeling_object model;

    double val1_t = 0.1;
    double val2_t = 0.1;
    double val3_t_mines = 0.1;

    int t;
    std::cout << "Enter the number of iterations :";
    std::cin >> t;

    std::cout << "Linear model :"<<std::endl;

    for (int i = 0; i < t; i++)
    {
        val1_t = function1(&model, val1_t);
        std::cout << i + 1 << "; " << val1_t  << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Unlinear model :"<< std::endl;

    for (int i = 0; i < t; i++)
    {
        double temp = val2_t;
        val2_t = function2(&model, val2_t, val3_t_mines);
        val3_t_mines = temp;
        std::cout << i + 1 << "; " << val2_t << std::endl;
    }

    return 0;
}
