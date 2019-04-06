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
    float a = 0, b = 3;
    while (a < 2.2) {
        for (float i = 1.0; i <= b; i += 1.0) {
            std::cout<<"I="<<a<<' '<<"J="<<i+a<<'\n';
        }
        a += 0.2;
    }
    return 0;
}
