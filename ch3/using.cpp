#include <iostream>

// using declaration လုပ်လိုက်ပြီ။ 
// cin လို့ သုံးလိုက်ရင် std namespace ထဲက cin ကိုပဲ ရည်ညွှန်းတာ ဖြစ်သွားမယ်။
using std::cin;

int main()
{
    int i = 0;
    cin >> i;       // OK: cin က std::cin ရဲ့ synonym (အမည်တူ) ဖြစ်သွားပြီ။
    // cout << i;   // Error: cout အတွက် using declaration မရှိသေးလို့ သုံးလို့မရပါဘူး။
    std::cout << i; // OK: std::cout လို့ အပြည့်အစုံရေးရင်တော့ အလုပ်လုပ်ပါတယ်။
    return 0;
}