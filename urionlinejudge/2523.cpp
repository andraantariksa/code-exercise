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
    string s;
    i32 a, b;
    while(getline(cin, s)){
        cin>>a>>ws;
        for (i32 i = 0; i < a; i++) {
            cin>>b>>ws;
            cout<<s[b-1];
        }
        cout<<'\n';
    }
    return 0;
}
