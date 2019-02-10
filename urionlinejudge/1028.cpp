/*input
3
8 12
9 27
259 111
*/
#include <iostream>

int gcd(int a, int b){
	if(b == 0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}

int main(){
	int n, a, b;
	std::cin>>n;
	while(n--){
		std::cin>>a>>b;
		std::cout<<gcd(a, b)<<std::endl;
	}
	return 0;
}