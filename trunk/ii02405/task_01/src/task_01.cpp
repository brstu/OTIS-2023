#include <iostream> 
#include <cmath> 
 
const double a = 0.3; 
const double b = 0.4; 
const double c = 0.1; 
const double d = 0.5; 
const double u = 1.0; 
double y = 0.0; 
 
void println(double val) { 
    std::cout << val << std::endl; 
} 
 
double linear(double y_param, int n, int t) { 
    if (n < t) { 
        println(y_param); 
        return linear(a * y_param + b * u, n + 1, t); 
    } 
    println(y_param); 
    return a * y_param + b * u; 
} 
 
int main() { 
    std::cout << "Линейная модель" << std::endl; 
    std::cout << linear(y, 0, 10) << std::endl; 
    std::cout << "                   " << std::endl; 
    std::cout << "Нелинейная модель" << std::endl; 
    println(y); 
    double y_prev = y; 
    double u_prev = u; 
    y = a * y - b * y_prev * y_prev + c * 1.0 + d * sin(1.0); 
    for (int i = 1; i < 10; i++) { 
        println(y); 
        double temp = y; 
        y = a * y - b * y_prev * y_prev + c * u + d * sin(u_prev); 
        y_prev = temp; 
        u_prev = u; 
    } 
    return 0; 
}
