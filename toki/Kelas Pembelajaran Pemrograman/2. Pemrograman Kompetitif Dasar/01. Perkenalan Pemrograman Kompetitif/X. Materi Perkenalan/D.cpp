/*input
dengklek
ganesh
*/
#include <iostream>

std::string s1, s2;

int main(){
	getline(std::cin, s1);
	getline(std::cin, s2);
	if(s1.length()+1 == s2.length() || s2.length()+1 == s1.length()){
		std::string shortest = (s2.length() > s1.length())?s1:s2;
		std::string longest = (s2.length() > s1.length())?s2:s1;
		int i2 = 0;
		for(int i = 0; i < shortest.length(); i++){
			if(shortest[i] != longest[i2]){
				i2++;
			}
			//std::cout<<"sh>"<<shortest[i]<<" lo>"<<longest[i2]<<std::endl;
			if(shortest[i] != longest[i2]){
				std::cout<<"Wah, tidak bisa :("<<std::endl;
				return 0;
			}
			i2++;
		}
		std::cout<<"Tentu saja bisa!"<<std::endl;
	}else{
		std::cout<<"Wah, tidak bisa :("<<std::endl;
	}
	return 0;
}