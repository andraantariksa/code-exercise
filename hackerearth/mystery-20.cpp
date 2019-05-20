#include <bits/stdc++.h>

int main(int argc, char const *argv[]){
	int factor, n, temp, temp2;
	std::cin>>n;
	for(int i = 0; i < n; i++){
		std::cin>>temp;
		factor = 0;
		for(int i = 1; i <= sqrt(temp); i++){
			if(temp % i == 0){
				factor++;
			}
		}
		temp2 = sqrt(temp);
		if(temp2*temp2 == temp){
			std::cout<<2*factor-1<<'\n';
		}else{
			std::cout<<2*factor<<'\n';
		}
	}
	return 0;
}