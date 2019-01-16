/*input
50.00 99.00
*/
#include <iostream>
#include <iomanip>

double a, b;

int main(){
	std::cin>>a>>b>>std::ws;
	std::cout<<std::setprecision(2)<<std::fixed;
	std::cout<<((b-a)/a)*100.0<<"%"<<std::endl;
	return 0;
}