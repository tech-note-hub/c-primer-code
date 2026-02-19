#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{                                   // အမှတ်တွေကို ၁၀ ခုစီ စုမယ်: 0--9, 10--19, . .. 90--99, 100
    vector<unsigned> scores(11, 0); // cluster ၁၁ ခုအတွက် vector၊ အားလုံးကို 0 နဲ့ စတင်ထားမယ်
    unsigned grade;
    while (cin >> grade)
    {                             // အမှတ်တွေကို ဖတ်မယ်
        if (grade <= 100)         // မှန်ကန်တဲ့ အမှတ်ဖြစ်မှသာ
            ++scores[grade / 10]; // သက်ဆိုင်ရာ cluster အတွက် counter ကို ၁ တိုးမယ် auto ind = grade/10; 
                                                                            //   scores[ind] = scores[ind] + 1;
    }


    for (auto i : scores)
    {
        cout << i << endl;
    }
}
