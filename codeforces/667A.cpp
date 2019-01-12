/*input
6 5
7 6 8 9 10 5
*/
#include <iostream>

int h, tot, temp, n;

int main(){
	std::cin>>tot>>h;
	n = 0;
	while(tot--){
		std::cin>>temp;
		if(temp > h){
			n += 2;
		}else{
			n += 1;
		}
	}
	std::cout<<n<<std::endl;
	return 0;
}