#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello World!";
    
    // c ကို reference အဖြစ် ကြေညာမှ s ထဲက တန်ဖိုးတွေ ပြောင်းမှာပါ
    for (char c : s) {
        c = 'X';
    }
    
    cout << s << endl; // Output: XXXXXXXXXXXX
    return 0;
}