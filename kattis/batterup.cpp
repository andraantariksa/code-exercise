/*input
11
-1 -1 -1 -1 0 0 0 0 0 0 1
*/
#include <iostream>

int tot_inp, inp;
double total, total2;

int main(){
	std::cin>>tot_inp;
	total = 0;
	total2 = 0;
	while(tot_inp--){
		std::cin>>inp;
		if(inp >= 0){
			total += inp;
			total2++;
		}
	}
	std::cout<<total/total2<<std::endl;
	return 0;
}