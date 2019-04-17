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
    i32 a, b, c;
    cin>>a;
    for (i32 i = 0; i < a; i++) {
        cin>>b>>c;
        for (i32 j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                if(j%2 == 0 && k%2 == 0){
                    cout<<'*';
                }else if(j%2 == 0 && k%2 != 0){
                    cout<<'.';
                }else if(j%2 != 0 && k%2 == 0){
                    cout<<'.';
                }else if(j%2 != 0 && k%2 != 0){
                    cout<<'*';
                }
            }
            cout<<'\n';
        }
        if(i != a-1)
            cout<<'\n';
    }
    return 0;
}
