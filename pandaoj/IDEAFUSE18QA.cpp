#include <iostream>

int inp, n, tot = 0, min = 100;

int main(){
	std::cin>>n;
	for(int i = 0; i < n; i++){
		std::cin>>inp;
		if(inp < min){
			min = inp;
		}
		tot += inp;
	}
	std::cout<<tot-min<<std::endl;
	return 0;
}