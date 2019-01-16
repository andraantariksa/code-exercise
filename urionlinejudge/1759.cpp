/*input
5
*/
#include <iostream>

int inp_tot;
std::string ho;

int main(){
	std::cin>>inp_tot;
	if(inp_tot > 0){
		for(int i = 0; i < inp_tot-1; i++){
			std::cout<<"Ho ";
		}
		std::cout<<"Ho!"<<std::endl;
	}
}