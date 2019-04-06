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

i64 rev_num(i64 x) {
    i64 temp = x;
    i64 ret  = 0;
    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i64 a, b;
    cin>>a>>b;
    cout<<rev_num(rev_num(a)+rev_num(b))<<'\n';
    return 0;
}
