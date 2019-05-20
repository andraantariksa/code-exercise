#include <bits/stdc++.h>

int main(){
    int a, b, c;
    std::cin>>a>>b>>c;
    b /= a;
    if(b >= c){
        std::cout<<c<<'\n';
    }else{
        std::cout<<b<<'\n';
    }
    return 0;
}
