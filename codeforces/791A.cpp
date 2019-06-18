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
    i32 a, b, i = 0;
    cin>>a>>b;
    while(a <= b){
        a *= 3;
        b *= 2;
        i++;
    }
    cout << i << '\n';
}
