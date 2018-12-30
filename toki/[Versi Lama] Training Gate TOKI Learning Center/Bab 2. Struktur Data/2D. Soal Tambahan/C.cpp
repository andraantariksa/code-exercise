#include <iostream>

unsigned long long int inp;

bool isPowerOf2(unsigned long long int x){
    return (x != 0) && ((x & (x - 1)) == 0);
}

int main(){
    std::cin>>inp;
    if(isPowerOf2(inp) == true){
        std::cout<<"TRUE"<<std::endl;
    }else{
        std::cout<<"FALSE"<<std::endl;
    }
    return 0;
}