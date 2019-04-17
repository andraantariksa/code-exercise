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
    u64 a, b, c[1001];
    memset(&c, 0, sizeof(u64)*1001);
    cin>>a;
    for (u64 i = 0; i < a; i++) {
        cin>>b;
        c[b] += 1;
    }
    for (u64 i = 0; i < 1001; i++) {
        for (u64 j = 0; j < c[i]; j++) {
            cout<<i<<'\n';
        }
    }
    return 0;
}
