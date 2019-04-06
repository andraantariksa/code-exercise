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
    string s_arr[101], s;
    i32 i = 0;
    while(getline(cin, s)){
        s_arr[i] = s;
        i++;
    }
    for (i32 j = i-1; j >= 0; j--) {
        cout<<s_arr[j]<<'\n';
    }
    return 0;
}
