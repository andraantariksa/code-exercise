/*input
R
s;;upimrrfod;pbr
*/
#include <iostream>

char type, state;
std::string inp, keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main(){
	std::cin>>type>>inp;
	if(type == 'R'){
		state = -1;
	}else if(type == 'L'){
		state = 1;
	}
	for(int i = 0; i < inp.length(); i++){
		inp[i] = keyboard[keyboard.find(inp[i])+state];
	}
	std::cout<<inp<<std::endl;
	return 0;
}