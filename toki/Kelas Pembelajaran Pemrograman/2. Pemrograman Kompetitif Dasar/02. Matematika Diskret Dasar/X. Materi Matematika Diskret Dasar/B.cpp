/*input
2 3
4 5
*/
#include <iostream>

long long int q, w, e, r, t, y, u;

long long int gcd(long long int a, long long int b){
	if(b != 0){
		return gcd(b, a%b);
	}else{
		return a;
	}
}

long long int lcm(long long int a, long long int b){
	return a*b/gcd(a, b);
}

int main(int argc, char const *argv[]){
	std::cin>>q>>w>>e>>r;
	t = lcm(w, r);
	y = (q*(t/w))+(e*(t/r));
	u = gcd(y, t);
	std::cout<<y/u<<" "<<t/u<<std::endl;
	return 0;
}