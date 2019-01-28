/*input
3
20 2
30 6
10 7
2
60 1
30 5
4
15 1
25 2
30 3
10 5
-1
*/
#include <iostream>

int inp_total, a, b, total, prev;

int main(){
	while(1){
		total = 0;
		std::cin>>inp_total;
		if(inp_total == -1){
			break;
		}
		prev = 0;
		while(inp_total--){
			std::cin>>a>>b;
			total += a*(b-prev);
			prev = b;
		}
		std::cout<<total<<" miles"<<std::endl;
	}
	return 0;
}