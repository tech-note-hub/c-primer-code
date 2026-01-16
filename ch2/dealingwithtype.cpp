#include <iostream>
#include <typeinfo>

int main()
{
    typedef double wages;
    typedef int count;

    wages hr = 15.25; //double hr = 15.25
    count dog = 0;

    typedef wages base, *p;  // double base, *p;

    std::cout << "type of hr ->" << typeid(hr).name() << std::endl;
    std::cout << "type of dog ->" << typeid(dog).name() << std::endl;

    using SI = int;

    typedef char *pstring;
    const pstring cstr = 0; // cstr is a CONSTANT POINTER to char

    count v1 = 10, v2 = 10;
    auto sum = v1+v2;
    std::cout << "type of sum ->" << typeid(sum).name() << std::endl;

    //decltype
    

    int i = 42, *l = &i;
    // decltype(*l) c = 2; 

    decltype(i) e;   // int (Variable's type)
    std::cout << "type of e ->" << typeid(e).name() << std::endl;
    decltype((i)) d = i ; // int& (Always a reference)

    std::cout << "type of d ->" << typeid(d).name() << std::endl;
    std::cout << "value of d ->" << d<< std::endl;
    d= 60;
    std::cout << "value of i ->" << i << std::endl;
    

}
