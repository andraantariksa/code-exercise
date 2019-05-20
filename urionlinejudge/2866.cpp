/*input
3
NoTApasCAL
atEQUEatabELATERMINE
zoEIrrRRRRa
*/
#include <iostream>
#include <vector>

int input_total;
std::string str, res;

int main(){
	std::cin>>input_total>>std::ws;
	while(input_total--){
		getline(std::cin, str);
		res = "";
		for(int i = str.length()-1; i >= 0; i--){
			if(str[i] >= 97 && str[i] <= 122){
				res += str[i];
			}
		}
		std::cout<<res<<std::endl;
	}
	return 0;
}