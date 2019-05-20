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
    i64 n, a, b, c;
    cin>>n;
    for (i64 i = 0; i < n; i++) {
        cin>>a>>b;
        if(a % 2 == 0){
            a++;
        }
        if(b < 0){
            c = 0;
        }else{
            c = 1;
        }
        cout<<b*(2*a+(b-1)*2)/2*c<<'\n';
    }
    return 0;
}
