/*input
5
1.0 12.0
0.7 5.2
0.9 10.7
0.5 20.4
0.2 30.0
*/
#include <iostream>
#include <iomanip>

int inp_tot;
float a, b, total;

int main(){
	std::cin>>inp_tot;
	total = 0;
	while(inp_tot--){
		std::cin>>a>>b;
		total += b*a;
	}
	std::cout<<std::setprecision(3)<<std::fixed<<total<<std::endl;
	return 0;
}