#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;
int main()
{
    string s;
    getline(cin, s);
    bool alp[26];
    memset(alp, false, 26);
    for (int i = 1; i < s.length(); i += 3) {
        alp[s[i] - 'a'] = true;
    }
    i32 b = 0;
    for (int i = 0; i < 26; i++) {
        if(alp[i]){
            b++;
        }
    }
    cout << b << '\n';
}
