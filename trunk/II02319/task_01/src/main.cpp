#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class Obscure {
private:
    const double a = 0.5;
    const double b = 0.5;
    const double c = 0.5;
    const double d = 0.5;

    int x = 1;
    int y = 100;
    int z = 1;
public:
    void obfuscateLinear(double var) {
        ofstream dataFile("linear_data.txt", ios::out);
        cout << "Executing obscured linear model:"<<endl;
        for (int i = x; i <= y; i++) {
            dataFile << i << " " << var << endl;
            cout << var << endl;
            var = a * var + b * z;
        }
    }

    void scrambleNonlinear(double var, double var2) {
        ofstream dataFile2("nonlinear_data.txt", ios::out);
        cout << "Executing obscured nonlinear model:"<<endl;
        for (int i = x; i <= y; i++) {
            dataFile2 << i << " " << var << endl;
            cout << var << endl;
            if (i == 1) {
                var = a * var - b * var2 * var2 + c * 0 + d * sin(0);
            } else {
                var = a * var - b * var2 * var2 + c * z + d * sin(z);
            }
            var2 = var;
        }
    }
};

int main() {
    double var = 0;
    ofstream linearFile("linear_data.txt");
    Obscure linearFunctions;
    linearFunctions.obfuscateLinear(var);
    linearFile.close();

    var = 0.05;
    double var2 = 0.2;
    ofstream nonlinearFile("nonlinear_data.txt");
    Obscure nonlinearFunctions;
    nonlinearFunctions.scrambleNonlinear(var, var2);
    nonlinearFile.close();

    return 0;
}
