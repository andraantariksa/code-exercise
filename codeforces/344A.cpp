/*input
6
10
10
10
01
10
10
*/
#include <iostream>

int total_magnets, c;
std::string inp;

int main(){
	std::cin>>total_magnets;
	std::string magnets[total_magnets];
	for(int i = 0; i < total_magnets; i++){
		std::cin>>inp;
		magnets[i] = inp;
	}
	c = 1;
	for(int i = 0; i < total_magnets-1; i++){
		if(magnets[i] != magnets[i+1]){
			c++;
		}
	}
	std::cout<<c<<std::endl;
	return 0;
}