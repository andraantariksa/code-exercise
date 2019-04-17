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
    string s;
    char c;
    cin>>s>>c;
    i32 tot = 0;
    for(auto i = s.begin(); i != s.end(); i++){
        if(*i == c){
            tot++;
        }
    }
    cout<<tot<<'\n';
    return 0;
}
