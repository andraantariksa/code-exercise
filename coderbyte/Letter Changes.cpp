#include <iostream>
using namespace std;

string LetterChanges(string str) {
    for(int i = 0; i < str.length(); i++){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            str[i]++;
            if(str[i] == 'z' + 1 || str[i] == 'Z' + 1){
                str[i] -= 26;
            }
            if(str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e'  || str[i] == 'o'){
                str[i] -= 32;
            }
        }
    }
    return str;
}

int main() {
    cout << LetterChanges(gets(stdin));
    return 0;
}
