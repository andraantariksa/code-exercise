/*input
20 2 8
*/
#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]){
	int a, b, c;
	std::cin>>a>>b>>c;
	for(int i = 0; i < b; i++){
		std::cout<<a<<std::endl;
		a += c;
	}
	return 0;
}