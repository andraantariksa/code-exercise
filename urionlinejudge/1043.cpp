#include <iostream>
#include <iomanip>

float x, y, z;

int main(){
    std::cin>>x>>y>>z;
    std::cout<<std::fixed<<std::setprecision(1);
    if(x < y+z && y < x+z && z < x+y){
        std::cout<<"Perimetro = "<<x+y+z<<std::endl;
    }else{
        std::cout<<"Area = "<<((x+y)*z)/2<<std::endl;
    }
    return 0;
}