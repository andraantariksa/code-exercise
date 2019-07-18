#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

bool balance(string *s)
{
    stack<char> st;
    for (auto i = s->begin(); i != s->end(); i++)
    {
        if (*i == '(' || *i == '[')
        {
            st.push(*i);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            if (*i == ')')
            {
                if (st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (*i == ']')
            {
                if (st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    i32 q, t;
    string s;
    cin >> q;
    while (q--)
    {
        cin >> s;
        if (balance(&s))
        {
            cout << "ya\n";
        }
        else
        {
            cout << "tidak\n";
        }
    }
}
