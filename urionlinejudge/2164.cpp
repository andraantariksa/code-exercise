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
    f64 a;
    cin>>a;
    cout<<setprecision(1)<<fixed;
    cout<<((pow(((1+pow(5, 0.5))/2), a)-pow(((1-pow(5, 0.5))/2), a))/pow(5, 0.5))<<'\n';
    return 0;
}
