#include <iostream>
#include <regex>

std::string l[4];
std::smatch sm;

int main(){
    getline(std::cin, l[0]);
    getline(std::cin, l[1]);
    getline(std::cin, l[2]);
    getline(std::cin, l[3]);
    std::regex e("(.*)"+l[1]+"(.*)"+l[2]+"(.*)");
    std::regex_match(l[0], sm, e);
    std::cout<<sm[1]<<sm[2]<<l[2]<<l[3]<<sm[3]<<std::endl;
    return 0;
}