#include <iostream>
#include <fstream>
#include <cmath> 

using namespace std;

class Solution {
private:
    double y1, y2, u;

    double a = 0.6;
    double b = 0.5;
    double c = 0.62;
    double d = 1.1;

    int i = 0;
public:
    double func1(double y, double u);
    double func2(double y, double u, double y1);
    void input();
    void output(ofstream& outFile);
};

double Solution::func1(double y, double u) {
    return a * y + b * u;
}

double Solution::func2(double y, double u, double y1) {
    return a * y - b * pow(y1, 2) + c * u + d * sin(u);
}

void Solution::input() {
    cin >> y1 >> u;
}

void Solution::output(ofstream& outFile) {
    outFile << i << " " << y1 << " " << y1 << endl;
    y1 = func1(y1, u);
    y2 = func2(y1, u, y1);
    i++;
    outFile << i << " " << y1 << " " << y2 << endl;

    for (i = 2; i < 100; i++) {
        y1 = func1(y1, u);
        y2 = func2(y2, u, y1);
        outFile << i << " " << y1 << " " << y2 << endl;
    }
}

int main() {
    ofstream outFile("output.txt");

    Solution object;
    object.input();
    object.output(outFile);

    return 0;
}