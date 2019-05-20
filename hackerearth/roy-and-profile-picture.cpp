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
    i32 a, b, c, d;
    cin>>a>>b;
    for (i32 i = 0; i < b; i++) {
        cin>>c>>d;
        if(c < a || d < a){
            cout<<"UPLOAD ANOTHER\n";
        }else if(d != c){
            cout<<"CROP IT\n";
        }else{
            cout<<"ACCEPTED\n";
        }
    }
    return 0;
}
