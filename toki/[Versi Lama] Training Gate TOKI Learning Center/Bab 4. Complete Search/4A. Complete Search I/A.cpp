#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;
typedef float f32;
typedef double f64;

i32 tukar(i32 n){
    i32 a = n/2;
    i32 b = n/3;
    i32 c = n/4;
    if(a+b+c <= n){
        return n;
    }
    return tukar(a)+tukar(b)+tukar(c);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i32 a;
    cin>>a;
    cout<<tukar(a)<<'\n';
    return 0;
}
