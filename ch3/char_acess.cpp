#include <iostream>
#include <cctype>
using std::cin, std::cout, std::endl;
using std::string;

int main()
{
    // string str("some string");
    // for (auto c : str)      // str ထဲက character တစ်ခုချင်းစီအတွက်
    //     cout << c << endl;  // c ကို ထုတ်ပြပြီး newline ဆင်းမယ်

    // string s("Hello World!!!");
    // decltype(s.size()) punct_cnt = 0; // string size နဲ့ type တူအောင် decltype သုံးထားတယ်

    // for (auto c : s)     // s ထဲက char တစ်ခုချင်းစီအတွက်
    //     if (ispunct(c))  // c က punctuation ဖြစ်ခဲ့ရင်
    //         ++punct_cnt; // counter ကို ၁ တိုးမယ်

    // cout << punct_cnt << " punctuation characters in " << s << endl;
    // // Output: 3 punctuation characters in Hello World!!!

    // string s("Hello World!!!");
    // for (auto &c : s)   // c က s ထဲက character တစ်ခုချင်းစီရဲ့ reference ဖြစ်တယ်
    //     c = toupper(c); // မူရင်း character ကိုပဲ အကြီးပြောင်းပြီး ပြန်ထည့်လိုက်တယ်

    // cout << s << endl;
    // // Output: HELLO WORLD!!!

    string s("some string");
    if (!s.empty())           // string အလွတ် မဟုတ်ဖို့ အရင်စစ်ရမယ်
        s[s.size() - 1] = toupper(s[s.size() - 1]); // ပထမဆုံး character (index 0) ကို အကြီးပြောင်းမယ်
    cout << s << endl;
}