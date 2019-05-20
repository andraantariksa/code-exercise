//https://www.codechef.com/problems/INTEST
#include <iostream>

int a, b, divisible, inp;

int main(){
	divisible = 0;
	std::cin>>a>>b;
	while(a--){
		std::cin>>inp;
		if(inp%b == 0){
			divisible++;
		}
	}
	std::cout<<divisible<<std::endl;
}