#include <cstdlib>
#include <iostream>
#include <string>

int main()
{
    std::string command = "python OTIS.py";
    std::system(command.c_str());
    return 0;
}