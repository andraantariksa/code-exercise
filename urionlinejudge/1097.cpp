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
    int a = 1;
    for (int i = 1; i <= 9; i += 2) {
        std::cout<<"I="<<i<<" J="<<i+6<<'\n';
        std::cout<<"I="<<i<<" J="<<i+5<<'\n';
        std::cout<<"I="<<i<<" J="<<i+4<<'\n';
    }
    return 0;
}
