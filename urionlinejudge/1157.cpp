#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

int main(){
    u64 n;
    cin>>n;
    for (int i = 1; i <= n/2; i++) {
        if(n%i == 0){
            cout<<i<<'\n';
        }
    }
    if(n > 1){
        cout<<n<<'\n';
    }
    return 0;
}
