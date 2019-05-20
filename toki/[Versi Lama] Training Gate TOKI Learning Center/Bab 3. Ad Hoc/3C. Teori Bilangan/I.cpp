#include <bits/stdc++.h>

int main(){
    unsigned long long int n, temp;
    std::cin>>n;
    for (int i = 0; i < n; i++) {
        std::cin>>temp;
        std::cout<<((temp/4+1)*((temp/4)*4)/2)+((temp/7+1)*((temp/7)*7)/2)-((temp/28+1)*((temp/28)*28)/2)<<'\n';
    }
    return 0;
}
