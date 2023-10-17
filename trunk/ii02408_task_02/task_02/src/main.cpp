#include <iostream>
#include <vector>

void mainFunction() {
    double K = 0.097;    // пропорциональная составляющая
    double T = 2.1623;   // интегральная составляющая
    double Td = 1.0;     // дифференциальная составляющая
    double step = 1.0;   // шаг

    double q0 = K * (1.0 + Td / step);
    double q1 = -K * (1.0 + 2.0 * Td / step - step / T);
    double q2 = (K * Td) / step;

    int count = 100;      // количество итераций
    double point = 29.0;  // желаемое значение

    std::cout << "START" << std::endl;
    std::vector<double> arr_LinY;  // массив текущих значений
    std::vector<double> arr_u;     // массив управляющих сигналов
    double param_a = 0.8;
    double param_b = 0.3;
    double y = 0.0;
    // double u = 0.0; - Remove this line

    // функция подсчёта линейной модели
    auto linear_model = [&](double y, double param_a, double param_b, double u) {
        return param_a * y + param_b * u; // формула линейной модели
    };

    // цикл вычисления Y для линейной модели
    for (int i = 1; i <= count; i++) {
        std::vector<double> arr_e = {0.0, 0.0, 0.0}; // массив разности желаемого значения и текущего значения
        arr_e[2] = arr_e[1];
        arr_e[1] = std::abs(point - y);
        double du = q0 * arr_e[1] + q1 * arr_e[2] + q2 * arr_e[0]; // вычисление изменения управляющего сигнала
        double PrevU = u;
        u = PrevU + du;
        y = linear_model(y, param_a, param_b, u); // вычисление текущего значения
        arr_LinY.push_back(y);  // добавляем в массив текущее значение
        arr_u.push_back(u);     // добавляем в массив управляющий сигнал
        std::cout << i << ". y = " << y << "\t| u = " << u << std::endl;
    }
}

int main() {
    mainFunction();
    return 0;
}