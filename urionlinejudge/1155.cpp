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
    double a = 0;
    for (double i = 1.0; i <= 100.0; i++) {
        a += 1.0/i;
    }
    std::cout<<std::setprecision(2)<<std::fixed;
    std::cout<<a<<'\n';
    return 0;
}
