/*input
ZXYzxy
200
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int mv;
	std::string s;
	getline(std::cin, s);
	std::cin>>mv;
	for(int i = 0; i < s.length(); i++){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] += mv%26;
				if(s[i] > 'z' || s[i] < '0'){
					s[i] -= 26;
				}
			}
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] += mv%26;
				if(s[i] > 'Z'){
					s[i] -= 26;
				}
			}
		}
		if(s[i] >= '0' && s[i] <= '9'){
			s[i] += mv % 10;
			if(s[i] > '9'){
				s[i] -= 10;
			}
		}
	}
	std::cout<<s<<'\n';
	return 0;
}