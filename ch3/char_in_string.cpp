#include <iostream>
#include <string>
#include <cctype> // character functions တွေအတွက် လိုအပ်ပါတယ်
using std::boolalpha;
using std::cin, std::cout, std::endl;
using std::string; 

int main() {
    char c1 = 'A';
    char c2 = 'a';
    char c3 = '9';
    char c4 = '!';
    char c5 = ' '; // space

    // bool တန်ဖိုးတွေကို 0/1 အစား true/false လို့ ပြပေးဖို့ သုံးတာပါ
    cout << boolalpha; 

    cout << "Testing with character: " << c1 << " (A)" << endl;
    cout << "isupper('" << c1 << "'): " << (bool)isupper(c1) << endl;    // စာလုံးအကြီးလား? -> true
    cout << "isalnum('" << c1 << "'): " << (bool)isalnum(c1) << endl;    // စာလုံး သို့မဟုတ် ဂဏန်းလား? -> true
    cout << "isalpha('" << c1 << "'): " << (bool)isalpha(c1) << endl;    // စာလုံးလား? -> true

    cout << "\nTesting with character: " << c2 << " (a)" << endl;
    cout << "islower('" << c2 << "'): " << (bool)islower(c2) << endl;    // စာလုံးအသေးလား? -> true
    cout << "toupper('" << c2 << "'): " << (char)toupper(c2) << endl;    // အကြီးပြောင်းရင် -> 'A'

    cout << "\nTesting with character: " << c3 << " (9)" << endl;
    cout << "isdigit('" << c3 << "'): " << (bool)isdigit(c3) << endl;    // ဂဏန်းလား? -> true
    cout << "isalnum('" << c3 << "'): " << (bool)isalnum(c3) << endl;    // စာလုံး သို့မဟုတ် ဂဏန်းလား? -> true

    cout << "\nTesting with character: " << c4 << " (!)" << endl;
    cout << "ispunct('" << c4 << "'): " << (bool)ispunct(c4) << endl;    // ပုဒ်ဖြတ်ပုဒ်ရပ်လား? -> true

    cout << "\nTesting with character: Space (' ')" << endl;
    cout << "isspace(' '): " << (bool)isspace(c5) << endl;               // whitespace လား? -> true

    cout << "\nTransformation Example:" << endl;
    char upper_A = 'A';
    cout << "tolower('A'): " << (char)tolower(upper_A) << endl;          // 'a' လို့ ထွက်လာမယ်

    return 0;
}