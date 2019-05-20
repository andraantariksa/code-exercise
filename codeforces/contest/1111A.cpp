/*input
eeeee
eeeeez
*/
#include <iostream>

bool isVowel(char c){
	return (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')?true:false;
}

int main(){
	std::string s[2];
	short shortest_s;
	getline(std::cin, s[0]);
	getline(std::cin, s[1]);
	if (s[1].length() != s[0].length()){
		std::cout<<"No"<<std::endl;
		return 0;
	}
	for(int i = 0; i < s[0].length(); i++){
		if(isVowel(s[0][i]) != isVowel(s[1][i])){
			std::cout<<"No"<<std::endl;
			return 0;
		}
	}
	std::cout<<"Yes"<<std::endl;
	return 0;
}