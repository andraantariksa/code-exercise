#include <iostream>
#include <iomanip>

int main(){
    float a, b = 0;
    int t = 0;
    while(std::cin>>a){
        if(a >= 0 && a <= 10){
            b += a;
            t++;
            if(t == 2){
                break;
            }
        }else{
            std::cout<<"nota invalida"<<std::endl;
        }
    }
    std::cout<<std::setprecision(2)<<std::fixed;
    std::cout<<"media = "<<b/2<<std::endl;
    return 0;
}
