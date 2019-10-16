#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

i32 a, b;

int go(int x, int y)
{
    if (x == 0 || y == 0 || x > a || y > b) {
        return 0;
    }

    if(x == a && y == b)
    {
        return 1;
    }

    return go(x + 1, y) + go(x, y + 1);
}

int main()
{
    cin >> a >> b;
    cout << go(1, 1) << '\n';
}
