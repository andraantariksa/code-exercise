#include <iostream>

short inp, arr[25000], i;

int main(){
    i = 0;
    while(std::cin>>inp){
        arr[i] = inp;
        i++;
    }
    for(i--; i >= 0; i--){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}