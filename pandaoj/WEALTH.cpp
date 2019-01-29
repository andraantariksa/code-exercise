#include <iostream>

int a, b, c = 0;

int main(){
	std::cin>>a;
	while(a--){
		std::cin>>b;
		if(b > c){
			c = b;
		}
	}
	std::cout<<c<<std::endl;
}