#include <iostream>

int main(int argc, char const *argv[]){
	int n;
	std::string s;
	std::cin>>n>>std::ws;
	while(n--){
		getline(std::cin, s);
		std::cout<<"I am Toorg!"<<std::endl;
	}
	return 0;
}