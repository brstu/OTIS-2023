#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class Solution {
private:
    double y1;
    mutable double y2;
    double u;
    double a = 0.6;
    double b = 0.5;
    double c = 0.62;
    double d = 1.1;
    mutable int count = 0;

public:
    double func1(double y, double u) const;
    double func2(double y_param, double u_param, double y1_param) const;
    void input();
    void output(ofstream& outFile);
};

double Solution::func1(double y, double u_param) const {
    return a * y + b * u_param;
}

double Solution::func2(double y, double u_param, double y1_param) const {
    return a * y - b * pow(y1_param, 2) + c * u_param + d * sin(u_param);
}

void Solution::input() {
    cin >> y1 >> u;
}

void Solution::output(ofstream& outFile) {
    outFile << count << " " << y1 << " " << y1 << endl;
    double tempY1 = func1(y1, u);

    y2 = func2(tempY1, u, y1);

    count++;

    outFile << count << " " << tempY1 << " " << y2 << endl;

    for (int j = 2; j < 100; j++) {
        tempY1 = func1(tempY1, u);

        y2 = func2(y2, u, tempY1);

        outFile << j << " " << tempY1 << " " << y2 << endl;
    }
}

int main() {
    ofstream outFile("output.txt");
    Solution object;
    object.input();
    object.output(outFile);
    return 0;
}
