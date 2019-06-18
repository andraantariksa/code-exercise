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
    cin>>a;
    char s[2][5] = {"hate", "love"};
    for (i32 i = 0; i < a; i++) {
        cout << "I " << s[i % 2] << ' ';
        if(i != a - 1){
            cout << "that ";
        }
    }
    cout << "it\n";
}
