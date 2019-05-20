#include <iostream>

int main(int argc, char const *argv[]){
	int n;
	std::cin>>n;
	if(n < 10){
		std::cout<<"satuan"<<std::endl;
	}else if(n < 100){
		std::cout<<"puluhan"<<std::endl;
	}else if(n < 1000){
		std::cout<<"ratusan"<<std::endl;
	}else if(n < 10000){
		std::cout<<"ribuan"<<std::endl;
	}else{
		std::cout<<"puluhribuan"<<std::endl;
	}
	return 0;
}