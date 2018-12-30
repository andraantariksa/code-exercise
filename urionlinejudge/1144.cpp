#include <iostream>

int inp, a, b, c;

int main(){
    std::cin>>inp;
    a = 1;
    b = 1;
    c = 1;
    for(int i = 1; i <= inp*2; i++){
        std::cout<<a<<" "<<b<<" "<<c<<std::endl;
        if(i == 2 || i%2 == 0){
            a++;
        }
        if(i == 2 || i%2 == 0){
            b = a*a;
        }else{
            b++;
        }
        if(i == 2 || i%2 == 0){
            c = a*a*a;
        }else{
            c++;
        }
    }
}