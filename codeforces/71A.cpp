#include <iostream>

unsigned short inpTot;
std::string inp;

int main(){
    std::cin>>inpTot;
    while(inpTot--){
        std::cin>>inp;
        if(inp.length() <= 10){
            std::cout<<inp<<std::endl;
        }else{
            std::cout<<inp[0]<<inp.length()-2<<inp[inp.length()-1]<<std::endl;
        }
    }
    return 0;
}