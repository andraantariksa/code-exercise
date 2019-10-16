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
    i32 q;
    string s, t;
    unordered_map<string, i32> m;
    cin >> q;
    while (q--)
    {
        cin >> t >> s;
        if(t.compare("DAFTAR") == 0)
        {
            try
            {
                m[s] += 1;
            }
            catch(out_of_range)
            {
                m[s] = 1;
            }
        }
        else
        {
            try
            {
                cout << m[s] << '\n';
            }
            catch(out_of_range)
            {
                cout << 0 << '\n';
            }
        }
    }
}
