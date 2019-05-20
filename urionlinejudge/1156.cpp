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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f64 a = 1, b = 1, c = 0;
    while(a <= 39.0){
        c += a/b;
        a += 2;
        b *= 2;
    }
    cout<<setprecision(2)<<fixed;
    cout<<c<<'\n';
    return 0;
}
