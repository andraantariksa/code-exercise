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
    i32 n, a = 0;
    std::cin>>n;
    for (int i = 0; i < n; i++) {
        std::cout<<a+1<<' '<<a+2<<' '<<a+3<<" PUM\n";
        a += 4;
    }
    return 0;
}
