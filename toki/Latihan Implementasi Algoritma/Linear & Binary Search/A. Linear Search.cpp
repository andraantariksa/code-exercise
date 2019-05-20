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
    u64 a, b, c;
    cin>>a>>b;
    for (u64 i = 0; i < a; i++) {
        cin>>c;
        if(c == b){
            cout<<i<<'\n';
            return 0;
        }
    }
    cout<<-1<<'\n';
    return 0;
}
