#include <iostream>

int m;
std::string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main(){
    std::cin>>m;
    std::cout<<month[m-1]<<std::endl;
    return 0;
}