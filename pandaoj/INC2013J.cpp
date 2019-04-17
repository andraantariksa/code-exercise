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
    string s, saved_s, temp;
    cin>>a;
    for (i32 i = 1; i <= a; i++) {
        cin>>b;
        cin>>saved_s;
        for (i32 j = 0; j < b-1; j++) {
            cin>>s;
            temp = "";
            c = (s.length() < saved_s.length())?s.length():saved_s.length();
            for(i32 k = 0; k < c; k++){
                if(saved_s[k] == s[k]){
                    temp += s[k];
                }else{
                    break;
                }
            }
            saved_s = temp;
        }
        cout<<"Case #"<<i<<": "<<saved_s<<'\n';
    }
    return 0;
}
