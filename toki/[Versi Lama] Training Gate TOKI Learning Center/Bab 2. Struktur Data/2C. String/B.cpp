/*input
abcdehalofghi
bcd
halo
semua
*/
#include <iostream>

std::string l[4];

int main(){
    getline(std::cin, l[0]);
    getline(std::cin, l[1]);
    getline(std::cin, l[2]);
    getline(std::cin, l[3]);
    l[0].erase(l[0].find(l[1]), l[1].length());
    l[0].insert(l[0].find(l[2])+l[2].length(), l[3]);
    std::cout<<l[0]<<'\n';
    return 0;
}