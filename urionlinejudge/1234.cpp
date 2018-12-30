#include <iostream>

std::string inputString;
bool upper;

int main(int argc, char const *argv[]){
    upper = true;
    while(getline(std::cin, inputString)){
        for(int i = 0; i < inputString.length(); i++){
            if(std::isalpha(inputString[i])){
                if(upper == true){
                    inputString[i] = std::toupper(inputString[i]);
                    upper = false;
                }else{
                    inputString[i] = std::tolower(inputString[i]);
                    upper = true;
                }
            }
        }
        std::cout<<inputString<<std::endl;
    }
    return 0;
}
