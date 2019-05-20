/*input
4
3 5
2 4
5 2
7 9
*/
#include <iostream>

int a, b, c;

int main(){
	std::cin>>a;
	for(int i = 1; i <= a; i++){
		std::cin>>b>>c;
		std::cout<<"Kasus #"<<i<<": "<<b*c<<std::endl;
	}
	return 0;
}