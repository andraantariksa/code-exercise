/*input
2
1
8
0
*/
#include <iostream>

int main(){
	int n, total;
	while(1){
		std::cin>>n;
		if(!n){
			return 0;
		}
		total = 0;
		for(int i = 1; i <= n; i++){
			total += i*i;
		}
		std::cout<<total<<std::endl;
	}
	return 0;
}