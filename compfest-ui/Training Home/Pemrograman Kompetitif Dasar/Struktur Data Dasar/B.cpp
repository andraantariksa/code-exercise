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
    list<string> l;
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> s;
            l.push_front(s);
        }
        else if (t == 2)
        {
            cin >> s;
            l.push_back(s);
        }
        else if (t == 3)
        {
            cout << l.front() << '\n';
            l.pop_front();
        }
        else
        {
            cout << l.back() << '\n';
            l.pop_back();
        }
    }
}
