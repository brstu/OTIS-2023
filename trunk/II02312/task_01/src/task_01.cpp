#include<iostream>
#include <cmath>
#include <fstream>

class model
{
private:
    int t = 1;                  //starttime
    int T = 30;                 //endtime    
    double u = 1;             //input warm    

    const double a = 0.2;
    const double b = 0.2;
    const double c = 0.2;
    const double d = 0.2;        //some constants

public:
    void linear(double y, std::ofstream& file)
    {
        if (t <= T)
        {
            file << t << " " << y << std::endl;
            std::cout << t << " " << y << std::endl;
            t++;
            linear(a * y + b * u, file);
        }
        else
        {
            std::cout << "end linear\n";
        }
    }
    void nonlinear(double y, double y1, std::ofstream& file)
    {
        if (t <= T)
        {
            file << t << " " << y << std::endl;
            std::cout << t << " " << y << std::endl;
            t++;
            y1 = y;
            nonlinear(a * y - b * pow(y1, 2) + c * u + d * sin(u), y, file);
        }
        else
        {
            std::cout << "end nonlinear" << std::endl;
        }
    }
};

int main()
{
    double y = 0;

    std::ofstream linearFile("linear.txt", std::ios::out);
    model linearFunctions;
    linearFunctions.linear(y, linearFile);
    linearFile.close();

    y = 0.1;                      //reset "y" for nonliner function
    double y1 = 0.1;

    std::ofstream nonlinearFile("nonlinear.txt", std::ios::out);
    model nonlinearFunctions;
    nonlinearFunctions.nonlinear(y, y1, nonlinearFile);
    nonlinearFile.close();

    return 0;
}
