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
    vector<string> v;
    string s;
    i32 max_s = 0;
    while(getline(cin, s)){
        if(s.length() > max_s){
            max_s = s.length();
        }
        v.push_back(s);
    }
    for (i32 i = 0; i < max_s; i++) {
        for (i32 j = v.size() - 1; j >= 0; j--) {
            if(i >= v[j].length())
                cout << ' ';
            else
                cout << v[j][i];
        }
        //cout << "endl";
        cout << '\n';
    }
    return 0;
}
