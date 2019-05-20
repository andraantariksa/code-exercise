#include <iostream>
#include <algorithm>

std::string str, res;

bool isConsonant(char c){
    bool delet = false;
    if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'y'){
        delet = true;
    }
    return delet;
}

int main(){
    getline(std::cin, str);
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    str.erase(std::remove_if(str.begin(), str.end(), isConsonant), str.end());
    res = "";
    for(char i: str){
        res = res + "." + i;  
    }
    std::cout<<res<<std::endl;
    return 0;
}