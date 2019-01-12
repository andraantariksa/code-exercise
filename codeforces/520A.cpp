/*input
35
TheQuickBrownFoxJumpsOverTheLazyDog
*/
#include <iostream>

std::string alp = "abcdefghijklmnopqrstuvwxyz";
bool alpCheck[26] = {false};
int a;
char b;

int main(){
	std::cin>>a;
	if(a < 26){
		std::cout<<"NO"<<std::endl;
		return 0;
	}else{
		while(a--){
			std::cin>>b;
			if(b >= 97 && b <= 122){
				b -= 32;
			}
			if(!alpCheck[b-65]){
				alpCheck[b-65] = true;
			}
		}
	}
	for(bool c: alpCheck){
		if(!c){
			std::cout<<"NO"<<std::endl;
			return 0;
		}
	}
	std::cout<<"YES"<<std::endl;
	return 0;
}