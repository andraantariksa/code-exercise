/*input
Makan Malam sPeSi@L 2015
*/
#include <iostream>

int main(int argc, char const *argv[]){
	std::string s;
	getline(std::cin, s);
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'a' && s[i] <= 'm'){
			s[i] += 13;
		}else if(s[i] >= 'n' && s[i] <= 'z'){
			s[i] -= 13;
		}else if(s[i] >= 'A' && s[i] <= 'M'){
			s[i] += 13;
		}else if(s[i] >= 'N' && s[i] <= 'Z'){
			s[i] -= 13;
		}
	}
	std::cout<<s<<'\n';
	return 0;
}