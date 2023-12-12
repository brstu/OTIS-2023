#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    double initialY;
    double initialU;

    cout << "Enter initial values for y and u: ";
    cin >> initialY >> initialU;

    ofstream outputFile("output.txt");

    double y1 = initialY;
    double y2 = initialY;
    double previousY2 = initialY;

    int i = 0;
    outputFile << i << " " << y1 << " " << y2 << endl;

    y1 = calculateFunction1(y1, initialU);
    y2 = calculateFunction2(y2, initialU, previousY2);
    i++;
    outputFile << i << " " << y1 << " " << y2 << endl;

    for (i = 2; i < 100; i++) {
        y1 = calculateFunction1(y1, initialU);
        y2 = calculateFunction2(y2, initialU, previousY2);
        previousY2 = y2;
        outputFile << i << " " << y1 << " " << y2 << endl;
    }

    return 0;
}
