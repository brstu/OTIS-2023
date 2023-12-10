#include <iostream>
#include <cmath>
#include <array>

class NonlinearModel {
public:
    NonlinearModel(int time, double desiredTemp = 10)
        : time(time), desiredTemp(desiredTemp), prevU(1.0) {
        arrayOfE = {0.001, 0.19, 0.00002};
        arrayOfQ = {0.4, 0.1, 0.12};
        weight = {1, 0, 1, 1.0};
    }

    void calculateModel() {
        for (int i = 0; i < time; i++) {
            param[3] = std::sin(param[3]);

            double futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;
            arrayOfE[2] = desiredTemp - futureY;

            futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;
            arrayOfE[1] = desiredTemp - futureY;

            weight[2] = prevU + arrayOfQ[0] * arrayOfE[2] + arrayOfQ[1] * arrayOfE[1] + arrayOfQ[2] * arrayOfE[0];

            futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;
            arrayOfE[0] = desiredTemp - futureY;

            result[i] = param[0];
        }
    }

    void printResults() const {
        std::cout << "Y" << std::endl;
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
};

int main() {
    int size = 200;
    NonlinearModel model(size);
    model.calculateModel();
    model.printResults();
    return 0;
}
