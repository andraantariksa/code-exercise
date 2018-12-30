#include <iostream>

unsigned short n, k, tot;

int main(){
    std::cin>>n>>k;
    tot = 0;
    k--;
    unsigned short arr[n];
    for(unsigned short i = 0; i < n; i++){
        std::cin>>arr[i];
    }
    for(unsigned short i = 0; i < n; i++){
        if(arr[i] >= arr[k] && arr[i] != 0){
            tot += 1;
        }else{
            break;
        }
    }
    std::cout<<tot<<std::endl;
    return 0;
}