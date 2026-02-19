#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    // 1. empty() နဲ့ size() ကို စစ်ဆေးခြင်း
    vector<int> v1; 
    if (v1.empty()) {
        cout << "v1 is currently empty." << endl; // v1 က အလွတ်ဖြစ်နေလို့ ဒါကို print ထုတ်မယ်
    }

    // 2. push_back(t) - element များ ထည့်သွင်းခြင်း
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    
    cout << "After push_back, v1 size is: " << v1.size() << endl; // size က 3 ဖြစ်သွားမယ်

    // 3. v[n] - index ဖြင့် လှမ်းယူခြင်း
    cout << "Element at index 1: " << v1[1] << endl; // index 1 က တန်ဖိုး 20 ကို ထုတ်ပြမယ်
    v1[1] = 25; // v[n] က reference ပြန်ပေးတာဖြစ်လို့ တန်ဖိုးကို တိုက်ရိုက် ပြောင်းလဲနိုင်ပါတယ်
    cout << "Updated element at index 1: " << v1[1] << endl;

    // 4. v1 = v2 (Assignment) - Copy ကူးခြင်း
    vector<int> v2;
    v2 = v1; // v1 ထဲက data အကုန် v2 ထဲ ရောက်သွားမယ်
    cout << "v2 size after assignment: " << v2.size() << endl;

    // 5. v1 = {a, b, c, ...} (List Assignment) - တန်ဖိုးအသစ်များ အစားထိုးခြင်း
    v2 = {1, 2, 3, 4}; // v2 ထဲမှာ အရင်ရှိတဲ့ data တွေ ပျက်သွားပြီး 1, 2, 3, 4 ဖြစ်သွားမယ်
    cout << "v2 new size: " << v2.size() << endl;

    // 6. == နဲ့ != (Equality) - ညီမညီ စစ်ဆေးခြင်း
    vector<int> v3 = {10, 25, 30};
    if (v1 == v3) {
        cout << "v1 and v3 are equal (same size and same values)." << endl;
    }

    // 7. Relational Operators (<, <=, >, >=) - နှိုင်းယှဉ်ခြင်း
    vector<int> v4 = {1, 2, 3};
    vector<int> v5 = {1, 2, 3, 0}; // v5 က size ပိုကြီးပေမဲ့ common elements တွေ တူနေတယ်
    
    if (v4 < v5) {
        cout << "v4 is less than v5 (dictionary/lexicographical ordering)." << endl;
    }

    return 0;
}