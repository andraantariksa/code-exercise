#include <iostream>
using namespace std;

string LetterCapitalize(string str) {
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
    }
    for(int i = 0; i < str.length() - 1; i++){
        if((str[i + 1] >= 'a' && str[i + 1] <= 'z') && str[i] == ' '){
            str[i + 1] -= 32;
        }
    }
    return str;
}

int main() {
    cout << LetterCapitalize(gets(stdin));
    return 0;
}
