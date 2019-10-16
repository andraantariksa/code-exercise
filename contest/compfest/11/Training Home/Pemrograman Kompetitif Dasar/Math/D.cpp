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
	i64 N, K;
	cin >> N >> K;
    vector<bool> p_table(700001, true);
    vector<i32> p_l;

    p_table[1] = false;
    for(i32 i = 2; i <= sqrt(700000); i++)
    {
        for(i32 j = i * i; j <= 700000; j += i)
        {
            if(p_table[j])
            {
                p_table[j] = false;
            }
        }
    }

    for(i32 i = 2; i <= 700000; i++)
    {
        if(p_table[i])
        {
            p_l.push_back(i);
        }
    }

    for(i32 i = 0; i < N; i++)
    {
        printf("%d\n", p_l[i * K + 1 - 1]);
    }
}
