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
    string a, b;
    getline(cin, a);
    getline(cin, b);
    string out = "";
    for(int i = 0; i < a.length(); i++){
        if(a[i] != b[i]){
            out += '1';
        }else{
            out += '0';
        }
    }
    cout << out << '\n';
}
