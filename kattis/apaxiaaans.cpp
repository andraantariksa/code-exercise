/*input
roooooobertapalaxxxxios
*/
#include <iostream>

std::string inp, res = "";

int main(){
	getline(std::cin, inp);
	char prev = 0;
	for(char i : inp){
		if(i == prev){
			continue;
		}
		prev = i;
		res += i;
	}
	std::cout<<res<<std::endl;
	return 0;
}