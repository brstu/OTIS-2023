#include <iostream>
#include <fstream>
#include <cmath> 

using namespace std;

class Solution {
private:
    double y1;
    mutable double y2;  // Make y2 mutable
    double u;
    double a;
    double b;
    double c;
    double d;
    mutable int i;  // Make i mutable

public:
    Solution() : a(0.6), b(0.5), c(0.62), d(1.1), i(0) {}

    double func1(double y, double u) const;
    double func2(double y, double u, double y1) const;
    void input();
    void output(ofstream& outFile) const;
};

double Solution::func1(double y, double u) const {
    return a * y + b * u;
}

double Solution::func2(double y, double u, double y1) const {
    return a * y - b * pow(y1, 2) + c * u + d * sin(u);
}

void Solution::input() {
    cin >> y1 >> u;
}

void Solution::output(ofstream& outFile) const {
    outFile << i << " " << y1 << " " << y1 << endl;
    double tempY1 = func1(y1, u);

    // Update y2 using const func2
    y2 = func2(tempY1, u, y1);

    // Increment i
    i++;

    outFile << i << " " << tempY1 << " " << y2 << endl;

    for (int j = 2; j < 100; j++) {
        tempY1 = func1(tempY1, u);

        // Update y2 using const func2
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
