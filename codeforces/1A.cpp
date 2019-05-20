#include <iostream>

unsigned long long int a, b, c, x, y;

int main(){
    std::cin>>a>>b>>c;
    x = a/c;
    y = b/c;
    if(a%c != 0){
        x += 1;
    }
    if(b%c != 0){
        y += 1;
    }
    std::cout<<x*y<<std::endl;
    return 0;
}