#include <iostream>
#include <cmath>

float a, b, c;

int main(){
    std::cin>>a>>b>>c;
    std::cout<<round(a+a*(b/100)+a*(c/100))<<std::endl;
    return 0;
}