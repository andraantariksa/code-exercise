#include <bits/stdc++.h>

int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    return gcd(b%a, a);
}

int main(int argc, const char *argv[])
{
    int n, a, b;
    std::cin>>n;
    for (int i = 0; i < n; i++) {
        std::cin>>a>>b;
        std::cout<<gcd(a, b)<<'\n';
    }
    return 0;
}
