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

bool f(i64 a){
    if(a <= 6){
        return true;
    }
    i32 b = 0;
    for (i32 i = 2; i <= sqrt(a); i++) {
        if(a%i == 0){
            b++;
        }
        if(b > 1){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i64 a, b;
    cin>>a;
    for (int i = 0; i < a; i++) {
        cin>>b;
        if(f(b)){
            cout<<"YA\n";
        }else{
            cout<<"BUKAN\n";
        }
    }
    return 0;
}
