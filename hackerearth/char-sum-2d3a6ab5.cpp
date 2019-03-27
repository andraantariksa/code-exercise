#include <iostream>

int main(int argc, char const *argv[]){
	std::string s;
	int tot;
	getline(std::cin, s);
	for(int i = 0; i < s.length(); i++){
		tot += s[i]-'a'+1;
	}
	std::cout<<tot<<'\n';
	return 0;
}