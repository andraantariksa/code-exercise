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
    i32 q, t;
    string s;
    queue<string> que;
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> s;
            que.push(s);
        }
        else
        {
            cout << que.front() << '\n';
            que.pop();
        }
    }
}
