#include <vector>
#include <iostream>
using std::vector, std::cin, std::cout, std::endl;

int main()
{
    // vector<int> v2; // empty vector
    // for (int i = 0; i != 100; ++i)
    //     v2.push_back(i); // append elements to v2
    // cout << "size of v2: " << v2.size() << endl ;

    vector<int> ivec; // empty vector
    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
        ivec[ix] = ix; // ERROR: ivec has no elements!
}