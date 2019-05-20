#include <iostream>

unsigned int inpTot, inp, max = 0, maxVal = 0;

int main(){
    std::cin>>inpTot;
    unsigned int arr[1001] = {0};
    for(unsigned int i = 0; i < inpTot; i++){
        std::cin>>inp;
        arr[inp] += 1;
    }
    for(unsigned int i = 1; i <= 1000; i++){
        if(arr[i] >= maxVal){
            max = i;
            maxVal = arr[i];
        }
    }
    std::cout<<max<<std::endl;
    return 0;
}
