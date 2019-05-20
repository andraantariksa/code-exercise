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
    for (int j = 1; j <= a; j++) {
        for (int i = 0; i < a-j; i++) {
            cout<<' ';
        }
        for (int i = 0; i < j; i++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    return 0;
}
