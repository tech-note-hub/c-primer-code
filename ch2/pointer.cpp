#include <iostream>

int main()
{
    int *p1 = nullptr; // ဘယ်သူ့ကိုမှ မညွှန်ထားတဲ့ Pointer
    int ival = 42;
    int *p = &ival;
    std::cout << *p << std::endl;
    return 0;

}