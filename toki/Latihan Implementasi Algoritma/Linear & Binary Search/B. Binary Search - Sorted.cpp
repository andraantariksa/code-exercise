#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

int binary_search(vector<i32> *v, int left, int right, int n) {
    while (right >= left) {
        int mid = left + (right - left) / 2;

        if (v->at(mid) == n) {
            return mid;
        }

        if (v->at(mid) < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<i32> v;
    i32 n, m, temp, temp2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        temp2 = binary_search(&v, 0, v.size() - 1, temp);
        while(temp2 > 0 && v[temp2 - 1] == temp){
            temp2--;
        }
        cout << temp2 << '\n';
    }
}
