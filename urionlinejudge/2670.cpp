#include <iostream>
#include <algorithm>
#include <vector>

int a, b, c;
std::vector<int> total(3);

int main(){
    std::cin>>a>>b>>c;
    total[0] = (a*2)+(c*2);
    total[1] = (b*2)+(c*4);
    total[2] = (a*4)+(b*2);
    std::sort(total.begin(), total.end());
    std::cout<<total[0]<<std::endl;
    return 0;
}