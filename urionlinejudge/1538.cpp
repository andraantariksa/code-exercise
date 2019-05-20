#include <bits/stdc++.h>

int main(int argc, const char *argv[])
{
    char pat[4] = { 'A', 'B', 'C', 'D' };
    unsigned long long int inp;
    std::string out;
    while(std::cin>>inp && inp != 0){
        inp *= inp;
        out = "";
        do{
            out = pat[inp%4] + out;
            inp /= 4;
        }while(inp > 0);
        std::cout<<out<<'\n';
    }
    return 0;
}
