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
    i32 a, b, d;
    while(cin>>a>>b){
        i32 c[a];
        for (int i = 0; i < a; i++) {
            cin>>c[i];
        }
        sort(c, c+a);
        reverse(c, c+a);
        for (int i = 0; i < b; i++) {
            cin>>d;
            cout<<c[d-1]<<'\n';
        }
    }
    return 0;
}
