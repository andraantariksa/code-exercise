#include <bits/stdc++.h>

long long int prob[1001];

long long int get_prob(long long int n){
    if(::prob[n] != -1){
        return ::prob[n];
    }
    ::prob[n] = (get_prob(n-1)+get_prob(n-3))%1000000;
    return ::prob[n];
}

int main(int argc, const char *argv[])
{
    long long int n;
    memset(::prob, -1, sizeof(::prob));
    ::prob[0] = ::prob[1] = ::prob[2] = 1;
    std::cin>>n;
    std::cout<<get_prob(n)<<'\n';
    return 0;
}
