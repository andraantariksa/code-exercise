/*
https://en.wikipedia.org/wiki/Coupon_collector%27s_problem
https://www.quora.com/What-is-the-Coupon-Collectors-problem
*/
#include <iostream>
#include <iomanip>

int total_case;
float sum, i, inp;

int main(){
	std::cin>>total_case;
	while(total_case--){
		std::cin>>inp;
		sum = 0;
		for(i = 1.0; i <= inp; i++){
			sum += 1.0/i;
		}
		sum *= inp;
		std::cout<<std::fixed<<std::setprecision(2);
		std::cout<<sum<<std::endl;
	}
	return 0;
}