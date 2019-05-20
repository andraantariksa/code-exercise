/*input
SuperVinHebat
*/
#include <iostream>

std::string str;

int main(){
	getline(std::cin, str);
	for(unsigned int i = 0; i < str.length(); i++){
		if(str[i] < 'a'){
			str[i] += 32;
		}else if(str[i] > 'Z'){
			str[i] -= 32;
		}
	}
	std::cout<<str<<std::endl;
	return 0;
}