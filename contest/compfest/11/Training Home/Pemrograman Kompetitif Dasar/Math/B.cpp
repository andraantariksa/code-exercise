#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

i64 gcd(i64 a, i64 b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

i64 lcm(i64 a, i64 b) {
    return a * b / gcd(a, b);
}

int main()
{
	i64 a, b;
	cin >> a >> b;
    cout << lcm(a, b) << '\n';
}
