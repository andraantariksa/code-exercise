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
    i32 a = 0, b = 0;
    string s;
    cin>>s;
    for (char c: s) {
        switch(c){
            case 'L':
                a--;
                break;
            case 'R':
                a++;
                break;
            case 'D':
                b--;
                break;
            case 'U':
                b++;
                break;
        }
    }
    cout<<a<<' '<<b<<'\n';
    return 0;
}
