/*input
245
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int n;
	std::cin>>n;
	std::cout<<n/3600<<'\n'<<n%3600/60<<'\n'<<n%60<<std::endl;
	return 0;
}