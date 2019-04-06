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

int f(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*f(n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i32 a;
    cin>>a;
    if(a >= 0 && a <= 10){
        cout<<f(a)<<'\n';
    }else{
        cout<<"ditolak\n";
    }
    return 0;
}
