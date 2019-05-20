/*input
Albus Dumbledore
*/
#include <iostream>

std::string s, n;
int sum;

int main(){
	while(getline(std::cin, s)){
		sum = 0;
		for(char c:s){
			if(c >= 97 && c <= 122){
				c -= 32;
			}
			if(c >= 65 && c <= 90){
				c -= 64;
				while(c > 9){
					c -= 9;
				}
				sum += c;
			}
		}
		while(sum >= 10){
			n = std::to_string(sum);
			sum = 0;
			for(char c: n){
				sum += c-'0';
			}
		}
		std::cout<<sum<<std::endl;
	}
}