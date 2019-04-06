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
    f64 a;
    cout<<setprecision(1)<<fixed;
    for (int i = 0; i < 100; i++) {
        cin>>a;
        if(a <= 10.0)
            cout<<"A["<<i<<"] = "<<a<<'\n';
    }
    return 0;
}
