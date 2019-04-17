#include <iostream>

long long int inp, temp;
unsigned short inpTot;
bool unsorted;

int main(){
    std::cin>>inpTot;
    long long int arr[inpTot];
    for(unsigned short i = 0; i < inpTot; i++){
        std::cin>>inp;
        arr[i] = inp;
    }
    unsorted = true;
    while(unsorted){
        unsorted = false;
        for(unsigned short i = 0; i < inpTot-1; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                unsorted = true;
            }
        }
    }
    for(unsigned short i = 0; i < inpTot; i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}