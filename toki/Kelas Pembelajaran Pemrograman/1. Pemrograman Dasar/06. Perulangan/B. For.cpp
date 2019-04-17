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
    i32 a, b, tot = 0;
    cin>>a;
    for (i32 i = 0; i < a; i++) {
        cin>>b;
        tot += b;
    }
    cout<<tot<<'\n';
    return 0;
}
