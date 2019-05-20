/*input
1
1 2 3 2 1
*/
#include <iostream>

int total, tea_type, inp;

int main(){
	std::cin>>tea_type;
	total = 0;
	int i = 5;
	while(i--){
		std::cin>>inp;
		if(inp == tea_type){
			total++;
		}
	}
	std::cout<<total<<std::endl;
	return 0;
}