#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i32 a, b;
    cin>>a>>b;
    if(abs(a-b)%2 != 0){
        cout<<0<<'\n';
    }else{
        cout<<1<<'\n';
    }
    return 0;
}
