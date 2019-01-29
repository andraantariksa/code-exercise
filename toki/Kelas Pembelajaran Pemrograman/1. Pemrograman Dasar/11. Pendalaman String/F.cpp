/*input
superVinHebat
*/
#include <iostream>

std::string str, res;
char type = 0;

int main(){
	getline(std::cin, str);
	for(unsigned int i = 0; i < str.length(); i++){
		if(str[i] == '_'){
			type = 1;
			break;
		}else if(str[i] <= 'Z'){
			type = 2;
			break;
		}
	}
	if(type == 2){
		for(unsigned int i = 0; i < str.length(); i++){
			if(str[i] <= 'Z'){
				res += '_';
				res += str[i]+32;
				continue;
			}
			res += str[i];
		}
	}else if(type == 1){
		for(unsigned int i = 0; i < str.length(); i++){
			if(str[i] == '_'){
				res += str[i+1]-32;
				i += 1;
				continue;
			}
			res += str[i];
		}
	}else if(type == 0){
		res = str;
	}
	std::cout<<res<<std::endl;
	return 0;
}