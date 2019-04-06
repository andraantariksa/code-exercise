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
    i32 a;
    cin>>a;
    for (int i = 1; i <= a; i++) {
        if(i % 10 == 0){
            continue;
        }else if(i == 42){
            cout<<"ERROR\n";
            break;
        }else{
            cout<<i<<'\n';
        }
    }
    return 0;
}
