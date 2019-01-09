/*input
001001
*/

#include <iostream>

std::string s;
unsigned short ctr = 0;
char state;

int main(){
	getline(std::cin, s);
	state = s[0];
	for(char c: s){
		if(c == '1'){
			if(state != '1'){
				state = '1';
				ctr = 0;
			}
			ctr++;
		}else if(c == '0'){
			if(state != '0'){
				state = '0';
				ctr = 0;
			}
			ctr++;
		}
		if(ctr == 7){
			std::cout<<"YES"<<std::endl;
			return 0;
		}
	}
	std::cout<<"NO"<<std::endl;
	return 0;
}