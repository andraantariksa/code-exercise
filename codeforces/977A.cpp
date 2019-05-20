/*input
1000000000 9
*/
#include <iostream>

int a, b;

int main(){
	std::cin>>a>>b;
	while(a != 0 && b--){
		if(a%10 == 0){
			a /= 10;
		}else{
			a--;
		}
	}
	std::cout<<a<<std::endl;
	return 0;
}