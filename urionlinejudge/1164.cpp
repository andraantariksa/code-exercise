/*input
8
1
5
9
19
45
68
28
100
*/
#include <iostream>

int main(int argc, char const *argv[]){
	long long int n, n_, total;
	bool c;
	std::cin>>n;
	for(int i = 0; i < n; i++){
		std::cin>>n_;
		total = 0;
		c = false;
		for(int i2 = 1; total <= n_ && i2 < n_; i2++){
			total += i2;
			if(total == n_){
				c = true;
				std::cout<<n_<<" eh perfeito"<<std::endl;
				break;
			}
		}
		if(c){
			continue;
		}
		std::cout<<n_<<" nao eh perfeito"<<std::endl;
	}
	return 0;
}