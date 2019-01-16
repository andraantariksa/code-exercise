#include <iostream>
#include <iomanip>

double a, b;

int main(){
	std::cin>>a>>b;
	std::cout<<std::fixed<<std::setprecision(2);
	std::cout<<a/b<<std::endl;
	return 0;
}