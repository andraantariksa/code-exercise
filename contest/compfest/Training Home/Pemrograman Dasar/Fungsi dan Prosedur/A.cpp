#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

i32 f(i32 n){
    i32 total = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            total += 2;
        }
    }
    if (sqrt(n) == ceil(sqrt(n)))
    {
        total--;
    }
    return total;
}

int main()
{
    i32 until, total = 0;
    cin >> until;
    for (int i = 1; i <= until; i++)
    {
        total += f(i);
    }
    cout << total << '\n';
}
