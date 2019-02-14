/*input
4
Hulk 5000
Tony 1000
Thor 50
Steve 500
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int n, f;
	std::string s;
	std::cin>>n;
	while(n--){
		std::cin>>s>>f;
		if(s == "Thor"){
			std::cout<<'Y'<<std::endl;
		}else{
			std::cout<<'N'<<std::endl;
		}
	}
	return 0;
}