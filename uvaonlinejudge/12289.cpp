/* one
 * two
 * six
 * ten
 * nine
 * four
 * five
 * seven
 * eight
 * three
 */
#include <bits/stdc++.h>

int main(){
    int tot;
    std::string s;
    std::cin>>tot>>std::ws;
    for(int i = 0; i < tot; i++){
        getline(std::cin, s);
        if(s.length() == 3){
            if((s[1] == 'w' && s[2] == 'o') || (s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o')){
                std::cout<<"2\n";
            }else{
                std::cout<<"1\n";
            }
        }else if(s.length() == 5){
            std::cout<<"3\n";
        }
    }
    return 0;
}
