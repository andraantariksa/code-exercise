/*input
10
10 10 10 10 15 18 20 15 11 10
10
1 5 2 9 5 5 8 4 4 3
10
19 9 1 4 5 8 6 11 9 7
*/
#include <iostream>

int inp_tot, max, inp;

int main(){
	while(std::cin>>inp_tot){
		max = 0;
		while(inp_tot--){
			std::cin>>inp;
			if(inp > max){
				max = inp;
			}
		}
		if(max >= 20){
			std::cout<<"3"<<std::endl;
		}else if(max >= 10){
			std::cout<<"2"<<std::endl;
		}else{
			std::cout<<"1"<<std::endl;
		}
	}
	return 0;
}