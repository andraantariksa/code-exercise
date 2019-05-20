#include <iostream>
#include <iomanip>

int main(){
	int n;
	std::string s;
	std::cin>>n>>std::ws;
	std::cout<<std::setprecision(2)<<std::fixed;
	while(n--){
		getline(std::cin, s);
		std::cout<<s.length()*0.01<<std::endl;
	}
	return 0;
}
