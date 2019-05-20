#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]){
	int x_1, x_2, y_1, y_2;
	std::cin>>x_1>>y_1>>x_2>>y_2;
	std::cout<<abs(x_2-x_1)+abs(y_2-y_1)<<std::endl;
	return 0;
}