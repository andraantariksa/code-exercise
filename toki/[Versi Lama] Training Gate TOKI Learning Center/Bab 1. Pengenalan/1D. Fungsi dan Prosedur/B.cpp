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

void f(int a){
    i32 b = 1;
    string s;
    while(a >= 10){
        b++;
        a /= 10;
    }
    switch(b){
        case 1:
            s = "satuan";
            break;
        case 2:
            s = "puluhan";
            break;
        case 3:
            s = "ratusan";
            break;
        case 4:
            s = "ribuan";
            break;
        case 5:
            s = "puluhribuan";
            break;
        case 6:
            s = "ratusribuan";
            break;
        default:
            break;
    }
    cout<<s<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i32 a;
    while (cin>>a) {
        f(a);
    }
    return 0;
}
