#include <iostream>
#include <vector>
#include <algorithm>

unsigned long int inp, min, max;
std::vector<unsigned long int> inpVect;

int main(){
    while(std::cin>>inp){
        inpVect.push_back(inp);
    }
    max = *std::max_element(inpVect.begin(), inpVect.end());
    min = *std::min_element(inpVect.begin(), inpVect.end());
    std::cout<<max-min<<std::endl;
    return 0;
}