#include <bits/stdc++.h>

int main(){
    std::string a;
    unsigned int b;
    while(true){
        std::cin>>a;
        if(a.compare("0") == 0){
            return 0;
        }
        b = 0;
        for(int i = 0; i < a.length(); i++){
            b = (b + a[i] - '0') % 9;
        }
        std::cout<<((b == 0)?9:b)<<'\n';
    }
}
