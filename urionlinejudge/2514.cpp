#include <bits/stdc++.h>

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return a*b/gcd(a, b);
}

int main(){
    int a, b, c, d;
    while(std::cin>>a>>b>>c>>d){
        std::cout<<lcm(lcm(b, c), d) - a<<'\n';
    }
    return 0;
}
