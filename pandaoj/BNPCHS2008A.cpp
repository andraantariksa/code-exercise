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
    i32 a, alph[26], tot;
    string b;
    cin>>a;
    for (i32 i = 0; i < a; i++) {
        memset(alph, 0, sizeof alph);
        cin>>b;
        for(auto j = b.begin(); j != b.end(); j++){
            if(*j >= 'a' && *j <= 'z'){
                alph[*j - 'a']++;
            }
        }
        tot = 0;
        for(i32 j = 0; j < 26; j++){
            if(alph[j] > 0){
                tot++;
            }
        }
        cout<<tot<<'\n';
    }
    return 0;
}
