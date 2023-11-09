#include <iostream>
#include <cmath>
#include <array>

void runControlSystem() {
    const double K = 0.097;    // пропорциональная составляющая
    const double T = 2.1623;   // интегральная составляющая
    const double Td = 1.0;     // дифференциальная составляющая
    const double step = 0.001;   // шаг

    const double q0 = K * (1.0 + (step != 0 ? Td / step : 0.0));
    const double q1 = -K * (1.0 + 2.0 * Td / step - step / T);
    const double q2 = (K * Td) / step;

    const int count = 100;      // количество итераций
    const double point = 29.0;  // желаемое значение

    std::cout << "START" << std::endl;

    const double param_a = 0.8;
    const double param_b = 0.3;
    double y = 0.0;
    double u = 0.0;

    // функция подсчёта линейной модели
    auto linear_model = [&](double y_lambda, double a_lambda, double b_lambda, double u_lambda) {
        return a_lambda * y_lambda + b_lambda * u_lambda; // формула линейной модели
    };

    // цикл вычисления Y для линейной модели
    std::array<double, 3> arr_e = {0.0}; // массив разности желаемого значения и текущего значения
    for (int i = 1; i <= count; i++) {
        arr_e[2] = arr_e[1];
        arr_e[1] = std::abs(point - y);
        const double du = q0 * arr_e[1] + q1 * arr_e[2] + q2 * arr_e[0]; // вычисление изменения управляющего сигнала
        const double prevU = u;
        u = prevU + du;
        y = linear_model(y, param_a, param_b, u); // вычисление текущего значения
        std::cout << i << ". y = " << y << "\t| u = " << u << std::endl;
    }
}

int main() {
    runControlSystem();
    return 0;
}