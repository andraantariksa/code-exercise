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
    i32 a;
    string s, s2;
    cin >> a >> ws;
    while(a--) {
        getline(cin, s);
        s2 = s;
        reverse(s2.begin(), s2.end());
        if(s.compare(s2) == 0) {
            cout << "palindrom\n";
        }else{
            cout << "bukan palindrom\n";
        }
    }
}
