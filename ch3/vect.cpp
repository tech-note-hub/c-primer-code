#include <vector>
#include <iostream>
using std::vector, std::cin, std::cout, std::endl;

int main()
{
    // vector<int> v1; // int တွေသိမ်းမယ့် v1 ကို တည်ဆောက်တယ်၊ ဒါပေမဲ့ အထဲမှာ ဘာမှမရှိသေးဘူး (empty)

    vector<int> v1 = {1, 2, 3}; // ရှေ့ပြေး v1 မှာ တန်ဖိုးရှိတယ်ဆိုပါစို့

    vector<int> v2(v1);      // v1 ထဲက data တွေ v2 ထဲကို copy ရောက်သွားမယ်
    vector<int> v2_alt = v1; // အပေါ်က ပုံစံနဲ့ အတူတူပါပဲ၊ v1 ကို copy ကူးတာပါ

    for (const auto i : v2_alt)
    {
        cout << i << endl;
    }

    // element ၅ ခု ပါမယ်၊ တစ်ခုချင်းစီရဲ့ တန်ဖိုးက ၁၀၀ (100) ဖြစ်နေမယ်
    vector<int> v3(5, 100);
    // ရလဒ်: {100, 100, 100, 100, 100}

    vector<int> v4(10); // int ၁၀ ခုပါမယ်၊ အားလုံးက 0 တွေ ဖြစ်နေမယ်
    // ရလဒ်: {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    vector<string> svec(5); // string ၅ ခုပါမယ်၊ အားလုံးက empty string ("") တွေ ဖြစ်နေမယ်

    // element ၃ ခုပါမယ်၊ တန်ဖိုးတွေက "a", "an", "the" ဖြစ်မယ်
    vector<string> v5{"a", "an", "the"};

    // အောက်က ပုံစံကလည်း အပေါ်ကနဲ့ အတူတူပါပဲ
    vector<string> v5_alt = {"apple", "banana", "cherry"};

    vector<int> v_size(10); // ( ) သုံးထားလို့: element ၁၀ ခုပါတဲ့ vector (အားလုံးက 0 တွေ)
    vector<int> v_list{10}; // { } သုံးထားလို့: element ၁ ခုပဲပါတဲ့ vector (တန်ဖိုးက 10)

    vector<int> v_init(10, 1);  // ( ) သုံးထားလို့: element ၁၀ ခု၊ အားလုံးက 1 တွေ
    vector<int> v_items{10, 1}; // { } သုံးထားလို့: element ၂ ခု၊ တန်ဖိုးတွေက 10 နဲ့ 1
}
