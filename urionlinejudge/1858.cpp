#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

int main(){
    i32 a, b, c = 1000000000, d;
    cin>>a;
    for (int i = 0; i < a; i++) {
        cin>>b;
        if(b < c){
            c = b;
            d = i;
        }
    }
    cout<<d+1<<'\n';
    return 0;
}
