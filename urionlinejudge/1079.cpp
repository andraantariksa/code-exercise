#include <iostream>
#include <iomanip>

int main(){
	int n;
	float m[3];
	std::cin>>n;
	for(int i = 0; i < n; i++){
		for(int i2 = 0; i2 < 3; i2++){
			std::cin>>m[i2];
		}
		std::cout<<std::setprecision(1)<<std::fixed;
		std::cout<<(m[0]*2+m[1]*3+m[2]*5)/(10)<<std::endl;
	}
	return 0;
}
