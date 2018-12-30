#include <iostream>
#include <iomanip>

float x, y;
int input;

int main(){
    std::cin>>input;
    while(input--){
        std::cin>>x>>y;
        std::cout<<std::fixed<<std::setprecision(1);
        if(y == 0){
            std::cout<<"divisao impossivel"<<std::endl;
        }else{
            std::cout<<x/y<<std::endl;
        }
    }
    return 0;
}