#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

i32 t(i32 n) {
    if(n > 1)
        return 1 + t(ceil((double) n / 2.0)) + t(floor((double) n / 2.0));
    else
        return 1;
}

int main()
{
    i32 a;
    cin >> a;
    cout << t(a) << '\n';
}
