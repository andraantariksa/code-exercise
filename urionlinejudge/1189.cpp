#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]){
    double arr[12][12];
    char op;
    double total = 0.0;
    std::cin>>op;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            std::cin>>arr[i][j];
            if(j < (11-i) && j < i){
                total += arr[i][j];
            }
        }
    }
    std::cout<<std::setprecision(1)<<std::fixed;
    if(op == 'S'){
        std::cout<<total<<std::endl;
    }else{
        std::cout<<total/30.0<<std::endl;
    }
    return 0;
}