/*input
HoUse
*/
#include <iostream>

int up = 0, lo = 0;
std::string inp;

int main(){
	std::cin>>inp;
	for(char c: inp){
		if(c >= 65 && c <= 90){
			up++;
		}else if(c >= 97 && c <= 122){
			lo++;
		}
	}
	if(up > lo){
		for(int i = 0; i < inp.length(); i++){
			if(inp[i] >= 97 && inp[i] <= 122){
				inp[i] -= 32;
			}
		}
	}else{
		for(int i = 0; i < inp.length(); i++){
			if(inp[i] >= 65 && inp[i] <= 90){
				inp[i] += 32;
			}
		}
	}
	std::cout<<inp<<std::endl;
	return 0;
}