#include <iostream>

int main(){
    int a, b, c;
    std::cin>>a;
    for(int i = 1; i <= a; i++){
        std::cin>>b;
        c = 1;
        while((c * (2 + (c - 1)) / 2) < b){
            c++;
        }
        if((c * (2 + (c - 1)) / 2) == b){
            std::cout<<"Case #"<<i<<": YES\n";
        }else{
            std::cout<<"Case #"<<i<<": NO\n";    
        }
    }
    return 0;
}
