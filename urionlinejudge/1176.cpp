#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;
typedef long long int i128;
typedef unsigned long long int u128;

int main(){
    u128 fib[65];
    fib[0] = 0;
    fib[1] = fib[2] = 1;
    for (i32 i = 3; i < 65; i++) {
        fib[i] = fib[i-1]+fib[i-2];
    }
    u128 n, temp;
    cin>>n;
    for (i32 i = 0; i < n; i++) {
        cin>>temp;
        cout<<"Fib("<<temp<<") = "<<fib[temp]<<'\n';
    }
    return 0;
}
