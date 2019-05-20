/*input
-100
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int a;
	std::cin>>a;
	std::cout<<((a >= 0 && a <= 100)?"YA":"TIDAK")<<std::endl;
	return 0;
}