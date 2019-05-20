/*input
1
15 4
*/
#include <iostream>

int a, b, n;

int main(){
	std::cin>>n;
	while(n--){
		std::cin>>a>>b;
		if(a%b == 0){
			std::cout<<a/b<<std::endl;
		}else{
			std::cout<<a/b+1<<std::endl;
		}
	}
}