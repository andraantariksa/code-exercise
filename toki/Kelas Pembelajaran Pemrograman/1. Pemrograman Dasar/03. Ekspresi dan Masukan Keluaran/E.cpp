#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]){
	float n, m;
	std::cin>>n>>m;
	std::cout<<std::setprecision(2)<<std::fixed;
	std::cout<<n*m/2<<std::endl;
	return 0;
}