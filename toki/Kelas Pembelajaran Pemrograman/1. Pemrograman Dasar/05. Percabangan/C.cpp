#include <iostream>

int main(int argc, char const *argv[]){
	int n;
	std::cin>>n;
	if(n > 0 && n % 2 == 0){
		std::cout<<n<<std::endl;
	}
	return 0;
}