#include <bits/stdc++.h>

int main(int argc, const char *argv[])
{
    int n, m, tot;
    std::string s;
    std::cin>>n;
    for (int i = 0; i < n; i++) {
        std::cin>>m;
        tot = 0;
        for (int j = 0; j < m; j++) {
            std::cin>>s;
            for (int k = 0; k < s.length(); k++) {
                tot += j+(s[k]-'A')+k;
            }
        }
        std::cout<<tot<<'\n';
    }
    return 0;
}
