/*input
100000000000000000.0000
*/
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]){
	double t;
	std::cin>>t;
	std::cout<<std::setprecision(4)<<std::fixed;
	for(int i = 0; i < 100; i++){
		std::cout<<"N["<<i<<"] = "<<t<<"\n";
		t = t/2;
	}
	return 0;
}