#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class NonlinearModel {
public:
    NonlinearModel(int time, double desiredTemp = 10) : time(time), desiredTemp(desiredTemp) {
        arrayOfE[0] = 0.001;
        arrayOfE[1] = 0.19;
        arrayOfE[2] = 0.00002;

        // Introduce randomness to the coefficients for a 75% difference
        arrayOfQ[0] = 0.4 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        arrayOfQ[1] = 0.1 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        arrayOfQ[2] = 0.12 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));

        weight[0] = 1 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        weight[1] = 0 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        weight[2] = 1 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        weight[3] = 1.0 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));

        prevU = weight[3];
    }

    void calculateModel() {
        for (int i = 0; i < time; i++) {
            param[3] = sin(param[3]);

            double futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[2] = desiredTemp - futureY;

            futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[1] = desiredTemp - futureY;

            // Introduce randomness to the calculation of weight[2]
            weight[2] = prevU + arrayOfQ[0] * arrayOfE[2] + arrayOfQ[1] * arrayOfE[1] + arrayOfQ[2] * arrayOfE[0] * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));

            futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[0] = desiredTemp - futureY;

            result[i] = param[0];
        }
    }

    void printResults() {
        cout << "Y" << endl;
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
    NonlinearModel model(size);
    model.calculateModel();
    model.printResults();

    return 0;
}
