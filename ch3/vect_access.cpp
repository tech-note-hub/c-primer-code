#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &i : v)     // v ထဲက element တစ်ခုချင်းစီအတွက် (မှတ်ချက် - i က reference ဖြစ်ပါတယ်)
        i *= i;           // element တစ်ခုချင်းစီကို square (နှစ်ထပ်ကိန်း) တင်မယ်
    for (auto i : v)      // v ထဲက element တစ်ခုချင်းစီကို ပြန်ထုတ်မယ်
        cout << i << " "; // print ထုတ်ခြင်း
    cout << endl;
}