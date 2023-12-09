#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class CustomNonlinearModel {
public:
    CustomNonlinearModel(int time, double desiredTemp = 10) : time(time), desiredTemp(desiredTemp) {
        arrayOfE[0] = 0.003;
        arrayOfE[1] = 0.15;
        arrayOfE[2] = 0.0001;

        // Introduce randomness to the coefficients for a 60% difference
        arrayOfQ[0] = 0.25 * (1 + 0.6 * ((double)rand() / RAND_MAX - 0.5));
        arrayOfQ[1] = 0.12 * (1 + 0.6 * ((double)rand() / RAND_MAX - 0.5));
        arrayOfQ[2] = 0.08 * (1 + 0.6 * ((double)rand() / RAND_MAX - 0.5));

        weight[0] = 1.8 * (1 + 0.6 * ((double)rand() / RAND_MAX - 0.5));
        weight[1] = 0.7 * (1 + 0.6 * ((double)rand() / RAND_MAX - 0.5));
        weight[2] = 1.8 * (1 + 0.6 * ((double)rand() / RAND_MAX - 0.5));
        weight[3] = 1.3 * (1 + 0.6 * ((double)rand() / RAND_MAX - 0.5));

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
            weight[2] = prevU + arrayOfQ[0] * arrayOfE[2] + arrayOfQ[1] * arrayOfE[1] + arrayOfQ[2] * arrayOfE[0] * (1 + 0.6 * ((double)rand() / RAND_MAX - 0.5));

            futureY = weight[0] * param[0] + weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[0] = desiredTemp - futureY;

            result[i] = param[0];
        }
    }

    void displayCustomResults() {
        cout << "Custom Y" << endl;
        for (int i = 0; i < time; i++) {
            cout << result[i] << endl;
        }
    }

private:
    int time;
    double desiredTemp;
    double arrayOfE[3];
    double arrayOfQ[3];
    double weight[4];
    double prevU;
    double param[4] = {1, 0, 1, 1.0};
    double result[200];
};

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed the random number generator

    int size = 200;
    CustomNonlinearModel customModel1(size);
    customModel1.performCustomCalculation();
    customModel1.displayCustomResults();

    CustomNonlinearModel customModel2(size, 15); // Different desired temperature
    customModel2.performCustomCalculation();
    customModel2.displayCustomResults();

    return 0;
}
