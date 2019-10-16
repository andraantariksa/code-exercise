#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

int find(char l[100][11], int a, char s[11]) {
    for (i32 i = 0; i < a; i++) {
        if (strcmp(l[i], s) == 0) {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    i32 a, b;
    char l[100][11], s[11];

    cin >> a >> b;
    for (i32 i = 0; i < a; i++) {
        cin >> s;
        strcpy(l[i], s);
    }
    for (i32 i = 0; i < b; i++) {
        cin >> s;
        cout << find(l, a, s) << '\n';
    }
}
