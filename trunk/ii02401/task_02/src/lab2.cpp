#include <iostream>
#include <cmath>

class NonlinModel {
public:
    NonlinModel(int time, double desiredTemp = 10)
        : time(time), desiredTemp(desiredTemp), arrayOfE{0.001, 0.19, 0.00002},
          arrayOfQ{0.4, 0.1, 0.12}, weight{1, 0, 1, 1.0}, prevU(weight[3]) {}

    void calModel() {
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

    void printRes () const {
        std::cout << "Y" << std::endl;
        for (int i = 0; i < time; i++) {
            std::cout << result[i] << std::endl;
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
    int size = 200;
    NonlinModel model(size);
    model.calModel();
    model.printRes();
    return 0;
}
