#include <bits/stdc++.h>
#define MOD 1000000007
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
    i32 a, b, c, d;
    cin>>a;
    while(a--){
        cin>>b>>c>>d;
        if(d > 2000){
            cout<<b + (c * (d - 2000) / 100)<<'\n';
        }else{
            cout<<b<<'\n';
        }
    }
    return 0;
}
