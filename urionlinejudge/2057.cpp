/*input
24 48 3
*/
#include <iostream>

int a, b, c, tot;

int main(int argc, char const *argv[]){
	std::cin>>a>>b>>c;
	tot = a+b+c;
	while(tot >= 24){
		tot-=24;
	}
	while(tot < 0){
		tot+=24;
	}
	std::cout<<tot<<std::endl;
	return 0;
}