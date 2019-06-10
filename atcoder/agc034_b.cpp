#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int count = 0, count_ = -1;
    bool rep = false;
    size_t index = 0;
    while (true){
        if(count == 0){
            break;
        }
        count_ = 0;
        while (true) {
             index = str.find("ABC", index);
             if (index == string::npos) break;
             str.replace(index, 3, "BCA");
             index += 3;
             count++;
             count_++;
        }
    }
    cout << count << '\n';
}
