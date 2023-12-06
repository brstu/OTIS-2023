#include <iostream>
#include <vector>

int main()
{
	float a = 0.5, b = 0.6, c = 0.6, d = 0.4, e = 0.9, f0 = 1.2, fD = 1.1, g = 1.1, u = 1.0, u1 = 1.0, w = 60, F0, F1, F2, y = 10.0;

	//Коэффициенты. 
	F0 = e * (fD / f0 + 1);
	F1 = -e * (-f0 / g + 1 + 2 * fD / f0);
	F2 = e * (fD / f0);

	//Массивы для хранения.
    std::vector<float> Yt = { y, y };
    std::vector<float> E = { w - y, w - y };

	//Вычисление значений.
    int temp = 2;
    while (std::abs(Yt.back() - w) > 0.1) {
        temp++;
        E.push_back(w - Yt.back());
        u = u1 + F0 * E.back() + F1 * E[E.size() - 2] + F2 * E[E.size() - 3];
        Yt.push_back(a * Yt.back() - b * Yt[Yt.size() - 2] + c * u + d * std::sin(u1));
        u1 = u;
    }

    // Вывод графика
    for (int i = 0; i < Yt.size(); i++) {
        std::cout << Yt[i] << std::endl;
    }
}
