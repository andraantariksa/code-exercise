#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

i32 binary_search(vector<pair<i32, i32>> *v, i32 left, i32 right, i32 n) {
    while (right >= left) {
        i32 mid = left + (right - left) / 2;
		pair<i32, i32> at_mid = v->at(mid);

        if (at_mid.second == n) {
        	while(mid > 0 && v->at(mid - 1).second == n){
            	mid--;
        	}
            return v->at(mid).first;
        }

        if (at_mid.second < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
	pair<i32, i32> p_temp;
    vector<pair<i32, i32>> v;
    i32 n, m, temp, temp2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        p_temp.first = i;
        p_temp.second = temp;
        v.push_back(p_temp);
    }
    sort(v.begin(), v.end(), [](pair<i32, i32> a, pair<i32, i32> b){
    	if (a.second != b.second) {
    		return a.second < b.second;
    	}
    	return a.first < b.first;
    });
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        cout << binary_search(&v, 0, v.size() - 1, temp) << '\n';
    }
}
