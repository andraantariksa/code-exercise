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
	i32 a, b;
    bool not_first = false;
    vector<i32> v;
	cin >> a;
    while(a--)
    {
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(), v.end());
    for (i32 i = 0; i < v.size(); i++)
    {
        if (not_first)
        {
            printf(" ");
        }
        else
        {
            not_first = true;
        }
        printf("%d", v[i]);
    }
    printf("\n");
}
