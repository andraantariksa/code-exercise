#include <iostream>
#include <algorithm>

std::string str, strRev;

int main(){
    getline(std::cin, str);
    getline(std::cin, strRev);
    std::reverse(strRev.begin(), strRev.end());
    if(str == strRev){
        std::cout<<"YES"<<std::endl;
    }else{
        std::cout<<"NO"<<std::endl;
    }
    return 0;
}