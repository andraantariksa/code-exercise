/*input
2
Hacker
Rank
*/
#include <iostream>

int main(){
	int n;
	std::cin>>n>>std::ws;
	std::string s;
	while(n--){
		getline(std::cin, s);
		for(int i = 0; i < s.length(); i = i+2){
			std::cout<<s[i];
		}
		std::cout<<" ";
		for(int i = 1; i < s.length(); i = i+2){
			std::cout<<s[i];
		}
		std::cout<<std::endl;
	}
	return 0;
}