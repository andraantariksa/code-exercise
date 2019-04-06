#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;
typedef long long int i128;
typedef unsigned long long int u128;

int main(){
    i16 a, b;
    cin>>a>>b;
    vector<int> c(a);
    for (int i = 0; i < a; i++) {
        cin>>c[i];
    }
    sort(c.begin(), c.end());
    c.erase(unique(c.begin(), c.end()), c.end());
    cout<<c[b-1]<<'\n';
    return 0;
}
