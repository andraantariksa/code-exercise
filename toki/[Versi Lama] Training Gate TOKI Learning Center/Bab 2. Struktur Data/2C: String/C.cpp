#include <iostream>

std::string inp;
short i2;

int main(){
    getline(std::cin, inp);
    char out[inp.length()];
    i2 = inp.length()-1;
    for(unsigned short i = 0; i < inp.length(); i++){
        out[i] = inp[i2];
        i2--; 
    }
    std::cout<<out<<std::endl;
    return 0;
}