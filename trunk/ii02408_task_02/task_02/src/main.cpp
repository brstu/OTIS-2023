#include <iostream>
#include <vector>

double K = 0.097;    // пропорциональная составляющая
double T = 2.1623;   // интегральная составляющая
double Td = 1.0;     // дифференциальная составляющая
double step = 1.0;     // шаг

double q0 = K * (1 + Td / step);
double q1 = -K * (1 + 2 * Td / step - step / T);
double q2 = (K * Td) / step;

// функция подсчёта линейной модели
double linear_model(double y, double parram_a, double parram_b, double u) {
    y = parram_a * y + parram_b * u; // формула линейной модели
    return y;
}

int count = 100;      // количество итераций
double point = 29.0;  // желаемое значение

void mainFunction() {
    std::cout << "START" << std::endl;
    std::vector<double> arr_LinY;  // массив текущих значений
    std::vector<double> arr_u;     // массив управляющих сигналов
    double parram_a = 0.8;
    double parram_b = 0.3;
    double y = 0.0;
    double PrevU = 0.0;
    double u = 0.0;
    double du = 0.0;
    std::vector<double> arr_e = { 0.0, 0.0, 0.0 }; // массив разности желаемого значения и текущего значения

    // цикл вычисления Y для линейной модели
    for (int i = 1; i <= count; i++) {
        arr_e[2] = arr_e[1];
        arr_e[1] = abs(point - y);
        du = q0 * arr_e[1] + q1 * arr_e[2] + q2 * arr_e[3]; // вычисление изменения управляющего сигнала
        PrevU = u;
        u = PrevU + du;
        y = linear_model(y, parram_a, parram_b, u); // вычисление текущего значения
        arr_LinY.push_back(y);  // добавляем в массив текущее значение
        arr_u.push_back(u);     // добавляем в массив управляющий сигнал
        std::cout << i << ". y = " << y << "\t| u = " << u << std::endl;
    }
}

int main() {
    mainFunction();
    return 0;
}