#include <iostream>

int inp;

bool isPrime(int n){
    if(n <= 3){
        return n>1;
    }else if(n%2 == 0 || n%3 == 0){
        return false;
    }
    int i = 5;
    while(i*i <= n){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
        i += 6;
    }
}

int main(){
    while(std::cin>>inp){
        if(inp < 0){
            std::cout<<"TIDAK"<<std::endl;
        }else{
            if(isPrime(inp)){
                std::cout<<"YA"<<std::endl;
            }else{
                std::cout<<"TIDAK"<<std::endl;
            }
        }
    }
    return 0;
}