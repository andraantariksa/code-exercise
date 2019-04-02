#include <bits/stdc++.h>

int main(int argc, const char *argv[]){
    int fact[5] = {1, 2, 6, 24, 120}, sum;
    std::string n;
    while (true){
        std::cin>>n;
        if(!n.compare("0")){
            break;
        }
        sum = 0;
        for(int i = 0; i < n.length(); i++){
            //std::cout<<(n[n.length() - i] - '0') * fact[i]<<std::endl;
            sum += (n[n.length() - i - 1] - '0') * fact[i];
        }
        std::cout<<sum<<'\n';
    }
    return 0;
}
