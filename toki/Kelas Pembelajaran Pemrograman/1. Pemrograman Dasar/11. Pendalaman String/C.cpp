/*input
caesar
2
*/
#include <iostream>

std::string input, result = "";
char add_c;
int cipher_move, temp;

int main(){
	getline(std::cin, input);
	std::cin>>cipher_move;
	for(char c: input){
		temp = 0;
		if(c+cipher_move > 'z'){
			temp = 26;
		}
		add_c = c+cipher_move-temp;
		result += add_c;
	}
	std::cout<<result<<std::endl;
}