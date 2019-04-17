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

void swap(i32* a, i32* b){
    i32 temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i32 n, a, b, sum;
    cin>>n;
    for (i32 i = 0; i < n; i++) {
        cin>>a;
        cin>>b;
        if(a > b){
            swap(&a, &b);
        }
        sum = 0;
        for (i32 j = a; j <= b; j++) {
            if(j%2 != 0){
                sum += j;
            }
        }
        cout<<"Case "<<i+1<<": "<<sum<<'\n';
    }
    return 0;
}
