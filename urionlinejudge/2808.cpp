/*input
d4 d4
*/
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]){
	char c1, c2, i1, i2;
	std::cin>>c1>>i1>>std::ws>>c2>>i2;
	if((abs(i1-i2) == 1 && abs(c1-c2) == 2) || (abs(i1-i2) == 2 && abs(c1-c2) == 1)){
		std::cout<<"VALIDO\n";
	}else{
		std::cout<<"INVALIDO\n";
	}
	return 0;
}