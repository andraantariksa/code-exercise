#include <bits/stdc++.h>

int main(){
    std::string s;
    getline(std::cin, s);
    bool c;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'Y' || s[i] == 'A' || s[i] == 'I' || s[i] == 'U' || s[i] == 'E' || s[i] == 'O'){
            std::cout<<"invalid\n";
            return 0;
        }
        if(i < s.length()-1){
            if((s[i] <= '9' && s[i] >= '0') && (s[i+1] <= '9' && s[i+1] >= '0')){
                if(((s[i]-'0') + (s[i+1]-'0')) % 2 != 0){
                    std::cout<<"invalid\n";
                    return 0;
                }
            }
        }
    }
    std::cout<<"valid\n";
    return 0;
}
