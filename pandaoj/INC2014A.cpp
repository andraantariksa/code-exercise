#include <iostream>

int main(){
    int a, b, c, d, e, mem_size[4] = { 16000, 32000, 64000, 128000  };
    std::cin>>a;
    for(int i = 1; i <= a; i++){
        std::cin>>b;
        d = 0;
        for(int j = 0; j < b; j++){
            std::cin>>c;
            d += c;
        }
        for(int j = 0; j < 4; j++){
            if(mem_size[j] >= d){
                e = mem_size[j];
                break;
            }
        }
        std::cout<<"Case #"<<i<<": "<<e/1000<<"GB\n";
    }
    return 0;
}
