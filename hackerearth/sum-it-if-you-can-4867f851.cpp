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
    i32 sum = 0;
    string s;
    cin>>s;
    for(auto i = 0; i < s.length(); i++){
        sum += (int)(s[i] - '0') * (i + 1);
    }
    if(sum % 11 == 0){
        cout<<"Legal ISBN\n";
    }else{
        cout<<"Illegal ISBN\n";
    }
    return 0;
}
