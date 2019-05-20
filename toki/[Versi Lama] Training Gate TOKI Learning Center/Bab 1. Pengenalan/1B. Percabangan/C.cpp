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
    i64 a;
    cin>>a;
    if(a > 0){
        cout<<"positif"<<'\n';
    }else if(a < 0){
        cout<<"negatif"<<'\n';
    }else{
        cout<<"nol"<<'\n';
    }
    return 0;
}
