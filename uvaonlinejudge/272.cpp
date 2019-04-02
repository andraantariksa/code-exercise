#include <bits/stdc++.h>

int main(){
    std::string s(""), temp;
    bool close;
    while(getline(std::cin, temp)){
        s += temp+'\n';
    }
    close = false;
    for(int i = 0; i < s.length(); i++){
        if(!close){
            if(s[i] == '"'){
                s[i] = '`';
                s.insert(i, 1,'`');
                close = true;
            }
        }else{
            if(s[i] == '"'){
                s[i] = '\'';
                s.insert(i, 1, '\'');
                close = false;
            }
        }
    }
    std::cout<<s;
    return 0;
}
