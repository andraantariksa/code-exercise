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
    i32 a, d, sum;
    f64 c;
    vector<i32> b;
    cin>>a;
    cout<<setprecision(3)<<fixed;
    for (i32 i = 0; i < a; i++) {
        cin>>c;
        sum = 0;
        for (i32 j = 0; j < c; j++) {
            cin>>d;
            b.push_back(d);
            sum += d;
        }
        // avr = (i64)sum/c
        cout<<(f64) count_if(b.begin(), b.end(), [&sum, &c](i32 x){ return x > ((f64)sum/c);  }) * 100.0 / c<<"%\n";
        b.clear();
    }
    return 0;
}
