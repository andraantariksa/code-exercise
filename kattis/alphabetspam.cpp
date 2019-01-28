/*input
\/\/in_US$100000_in_our_Ca$h_Lo||ery!!!
*/
#include <iostream>
#include <iomanip>

std::string s;
double sym = 0, low = 0, up = 0, whit = 0, tot;

int main(){
	getline(std::cin, s);
	for(char c:s){
		if(c >= 'A' && c <= 'Z'){
			up++;
		}else if(c >= 'a' && c <= 'z'){
			low++;
		}else if(c == '_'){
			whit++;
		}else{
			sym++;
		}
	}
	tot = s.length();
	std::cout<<whit/tot<<'\n'<<low/tot<<'\n'<<up/tot<<'\n'<<sym/tot<<std::endl;
	return 0;
}