#include <iostream>
#include <string>
int global_int; // Value is 0

int main() {
    int local_int; // Value is Undefined (Garbage!) -> DANGER
    std::string s; // Value is empty string "" (Handled by class)

    std::cout << global_int << std::endl;
    std::cout << local_int << std::endl;
    std::cout << s << std::endl;
    return 0;
}