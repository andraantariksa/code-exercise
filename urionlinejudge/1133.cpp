#include <iostream>

int x, y;

int main(){
    std::cin>>x>>y;
    if(x > y){
        for(int i = y+1; i < x; i++){
            if(i%5 == 3 || i%5 == 2){
                std::cout<<i<<std::endl;
            }
        }
    }else if(x < y){
        for(int i = x+1; i < y; i++){
            if(i%5 == 3 || i%5 == 2){
                std::cout<<i<<std::endl;
            }
        }
    }
}