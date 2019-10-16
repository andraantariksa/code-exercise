#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

int main()
{
	i32 a, b, d, e;
    bool not_first = false;
    vector<i32> v;
	cin >> a >> d;
    while(a--)
    {
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(), v.end());
    for (i32 i = 0; i < d; i++)
    {
        cin >> e;
        printf("%d\n", v[e - 1]);
    }
}
