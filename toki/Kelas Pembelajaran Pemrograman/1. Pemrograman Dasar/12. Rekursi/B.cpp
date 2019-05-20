/*input
5
*/
#include <iostream>

int n;

int factEvOd(int n){
	if(n == 1){
		return 1;
	}
	//std::cout<<n<<std::endl;
	return (n/((n % 2 == 0)?2:1))*factEvOd(n-1);
}

int main(){
	std::cin>>n;
	std::cout<<factEvOd(n)<<std::endl;
	return 0;
}