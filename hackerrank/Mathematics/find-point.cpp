#include <iostream>

int main(){
    int n, x1, y1, mx, my;
    std::cin>>n;
    while(n--){
        std::cin>>x1>>y1>>mx>>my;
        std::cout<<(mx*2-x1)<<" "<<(my*2-y1)<<std::endl;
    }
    return 0;
}