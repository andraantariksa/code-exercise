/*input
1 1 1 1
*/
#include <iostream>
#include <cmath>

int a, b, k, n;

int f(int n){
	if(k > 1){
		::k--;
		return f(abs(::a*n+::b));
	}else{
		return abs(::a*n+::b);
	}
}

int main(){
	std::cin>>a>>b>>k>>n;
	std::cout<<f(n)<<std::endl;
	return 0;
}