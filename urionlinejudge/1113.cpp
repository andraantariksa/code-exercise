#include <iostream>

int a, b;

int main(){
    while(std::cin>>a>>b){
        if(a == b){
            break;
        }else if(a > b){
            std::cout<<"Decrescente"<<std::endl;
        }else if(a < b){
            std::cout<<"Crescente"<<std::endl;
        }
    }
    return 0;
}