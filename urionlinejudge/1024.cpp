/*input
4
Texto #3
abcABC1
vxpdylY .ph
vv.xwfxo.fd
*/
#include <iostream>
#include <algorithm>

int total_input;
std::string input;

int main(){
	std::cin>>total_input>>std::ws;
	while(total_input--){
		getline(std::cin, input);
		for(int i = 0; i < input.length(); i++){
			if(std::isalpha(input[i])){
				input[i] += 3;
			}
			if(i < (input.length()/2)+(input.length()%2)){
				input[i] -= 1;
			}
		}
		std::reverse(input.begin(), input.end());
		std::cout<<input<<std::endl;
	}
	return 0;
}