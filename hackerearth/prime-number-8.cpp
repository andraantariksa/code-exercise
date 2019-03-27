/*input
9
*/
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]){
	bool prime[1001];
	for(int i = 0; i < 1001; i++){
		prime[i] = true;
	}
	int inp;
	for(int i = 2; i < sqrt(1001); i++){
		if(prime[i]){
			for(int j = i*i; j < 1001; j += i){
				prime[j] = false;
			}
		}
	}
	std::cin>>inp;
	std::cout<<'2';
	for(int i = 3; i <= inp; i += 2){
		if(prime[i]){
			std::cout<<' '<<i;
		}
	}
	std::cout<<'\n';
	return 0;
}