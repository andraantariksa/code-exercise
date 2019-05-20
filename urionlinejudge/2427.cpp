/*input
9
*/
#include <iostream>

int x;

int main(){
	std::cin>>x;
	while(!((x & (x - 1)) == 0)){
		x--;
	}
	std::cout<<x*x<<std::endl;
}