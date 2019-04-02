#include <bits/stdc++.h>

int main(int argc, const char *argv[])
{
    int a;
    std::cin>>a;
    if(a >= 1000)
        std::cout<<1000<<" "<<a/1000<<'\n';
    a %= 1000;
    if(a >= 500)
        std::cout<<500<<" "<<a/500<<'\n';
    a %= 500;
    if(a >= 200)
        std::cout<<200<<" "<<a/200<<'\n';
    a %= 200;
    if(a >= 100)
        std::cout<<100<<" "<<a/100<<'\n';
    a %= 100;
    if(a >= 50)
        std::cout<<50<<" "<<a/50<<'\n';
    a %= 50;
    if(a >= 20)
        std::cout<<20<<" "<<a/20<<'\n';
    a %= 20;
    if(a >= 10)
        std::cout<<10<<" "<<a/10<<'\n';
    a %= 10;
    if(a >= 5)
        std::cout<<5<<" "<<a/5<<'\n';
    a %= 5;
    if(a >= 2)
        std::cout<<2<<" "<<a/2<<'\n';
    a %= 2;
    if(a >= 1)
        std::cout<<1<<" "<<a<<'\n';
    return 0;
}
