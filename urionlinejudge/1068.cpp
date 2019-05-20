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
    bool cont;
    while(getline(cin, s)){
        cont = false;
        stack<char> stck;
        for(char c: s){
            if(c == '('){
                stck.push(c);
            }else if(c == ')'){
                if(stck.empty()){
                    cout<<"incorrect\n";
                    cont = true;
                    break;
                }
                stck.pop();
            }
        }
        if(cont){
            continue;
        }
        if(stck.empty()){
            cout<<"correct\n";
        }else{
            cout<<"incorrect\n";
        }
    }
    return 0;
}
