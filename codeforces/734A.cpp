#include <iostream>

int n, A = 0, D = 0;
char inp;

int main(){
	std::cin>>n;
	while(n--){
		std::cin>>inp;
		if(inp == 'A'){
			A++;
		}else if(inp =='D'){
			D++;
		}
	}
	if(A == D){
		std::cout<<"Friendship"<<std::endl;
	}else if(A > D){
		std::cout<<"Anton"<<std::endl;
	}else if(A < D){
		std::cout<<"Danik"<<std::endl;
	}
	return 0;
}