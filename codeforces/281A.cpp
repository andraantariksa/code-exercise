#include <iostream>

std::string str;

int main(){
    getline(std::cin, str);
    if(str[0] >= 'a'){
        str[0] -= 32;
    }
    std::cout<<str<<std::endl;
    return 0;
}