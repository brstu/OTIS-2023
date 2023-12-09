#include <iostream>
#include <cmath>
#include <random>
#include <array>

class CustomNonlinearModel {
public:
    CustomNonlinearModel(int time, double desiredTemp = 10) : time(time), desiredTemp(desiredTemp), generator(getSeededEngine()), arrayOfE{0.003, 0.15, 0.0001} {
        // Introduce randomness to the coefficients for a 60% difference
        arrayOfQ = {0.25 * (1 + 0.6 * getRandom()), 0.12 * (1 + 0.6 * getRandom()), 0.08 * (1 + 0.6 * getRandom())};

        weight = {1.8 * (1 + 0.6 * getRandom()), 0.7 * (1 + 0.6 * getRandom()), 1.8 * (1 + 0.6 * getRandom()), 1.3 * (1 + 0.6 * getRandom())};

        prevU = weight[3];
    }

    void performCustomCalculation() {
        for (int i = 0; i < time; i++) {
            param[3] = sin(param[3]);

            double futureY = weight[0] * param[0] + weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[2] = desiredTemp - futureY;

            futureY = weight[0] * param[0] + weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[1] = desiredTemp - futureY;

            // Introduce randomness to the calculation of weight[2]
            weight[2] = prevU + arrayOfQ[0] * arrayOfE[2] + arrayOfQ[1] * arrayOfE[1] + arrayOfQ[2] * arrayOfE[0] * (1 + 0.6 * getRandom());

            futureY = weight[0] * param[0] + weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[0] = desiredTemp - futureY;

            result[i] = param[0];
        }
    }

    void displayCustomResults() const {
        std::cout << "Custom Y" << std::endl;
        for (int i = 0; i < time; i++) {
            std::cout << result[i] << std::endl;
        }
    }

private:
    int time;
    double desiredTemp;
    std::array<double, 3> arrayOfE;
    std::array<double, 3> arrayOfQ;
    std::array<double, 4> weight;
    double prevU;
    std::array<double, 4> param{1, 0, 1, 1.0};
    std::array<double, 200> result;
    std::mt19937 generator;

    double getRandom() {
        static std::uniform_real_distribution<double> distribution(-0.5, 0.5);
        return distribution(generator);
    }

    std::mt19937 getSeededEngine() {
        std::random_device rd;
        std::array<int, std::mt19937::state_size> seed_data;
        std::generate(seed_data.begin(), seed_data.end(), std::ref(rd));
        std::seed_seq seq(seed_data.begin(), seed_data.end());
        return std::mt19937(seq);
    }
};

int main() {
    int size = 200;
    CustomNonlinearModel customModel1(size);
    customModel1.performCustomCalculation();
    customModel1.displayCustomResults();

    CustomNonlinearModel customModel2(size, 15); // Different desired temperature
    customModel2.performCustomCalculation();
    customModel2.displayCustomResults();

    return 0;
}
