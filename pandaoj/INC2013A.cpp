#include <iostream>

int main(){
    int a, b, d[3];
    std::string c;
    std::cin>>a;
    for(int i = 1; i <= a; i++){
        std::cin>>b;
        d[0] = 0;
        d[1] = 0;
        d[2] = 0;
        for(int j = 0; j < b; j++){
            std::cin>>c;
            switch(c.length()){
                case 4:
                    d[0] += 1;
                    break;
                case 5:
                    d[1] += 1;
                    break;
                case 6:
                    d[2] += 1;
                    break;
            } 
        }
        std::cout<<"Case #"<<i<<": "<<d[0]<<' '<<d[1]<<' '<<d[2]<<'\n';
    }
    return 0;
}
