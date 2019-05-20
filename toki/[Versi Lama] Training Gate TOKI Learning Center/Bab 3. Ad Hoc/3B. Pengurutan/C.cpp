#include <bits/stdc++.h>

int main(int argc, const char *argv[])
{
    int a, min_swap = 0;
    std::cin>>a;
    std::vector<std::pair<int, int>> v(a);
    for (int i = 0; i < a; i++) {
        std::cin>>v[i].first;
        v[i].second = i;
    }
    std::sort(v.begin(), v.end());
    for (int i = 0; i < a; i++) {
        if(v[i].second == i){
            continue;
        }else{
            std::swap(v[i].first, v[v[i].second].first);
            std::swap(v[i].second, v[v[i].second].second);
        }
        if(i != v[i].second){
            i--;
        }
        min_swap++;
    }
    std::cout<<min_swap<<'\n';
    return 0;
}
