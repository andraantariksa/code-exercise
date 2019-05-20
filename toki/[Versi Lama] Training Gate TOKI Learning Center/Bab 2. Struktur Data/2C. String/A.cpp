#include <iostream>
#include <algorithm>

unsigned long long int inpTot, zero, temp;

int main(){
    std::cin>>inpTot;
    std::string numList[inpTot];
    for(unsigned long long int i = 0; i < inpTot; i++){
        std::cin>>numList[i];
        std::reverse(numList[i].begin(), numList[i].end());
        temp = stoll(numList[i]);
        numList[i] = std::to_string(temp);
    }
    for(unsigned long long int i = 0; i < inpTot; i++){
        std::cout<<numList[i]<<std::endl;
    }
    return 0;
}