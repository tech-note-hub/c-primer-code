#include <iostream>
int main()
{

    long double ld = 3.1415926536;
    //int a{ld};  // Error! Compiler will stop you.
    int b = ld; // Okay, but value becomes 3 (Data lost).

    std::cout << b << std::endl;
}