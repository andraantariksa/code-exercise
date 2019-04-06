#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

bool is_prime(i32 n){
    for (i32 i = 2; i <= sqrt(n); i++) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    i32 a, b;
    cin>>a;
    for (i32 i = 0; i < a; i++) {
        cin>>b;
        if(is_prime(b)){
            cout<<b<<" eh primo\n";
        }else{
            cout<<b<<" nao eh primo\n";
        }
    }
    return 0;
}
