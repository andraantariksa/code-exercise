/*input
5
*/
#include <iostream>

int main(int argc, char const *argv[]){
	long long int n, total;
	std::cin>>n;
	total = n*(2*1+(n-1)*1)/2;
	std::cout<<total%2<<std::endl;
	return 0;
}