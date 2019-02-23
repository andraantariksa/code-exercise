/*input
2
7 17
25 100
*/
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]){
	int n, total, r;
	long long int m, o;
	std::cin>>n;
	for(int i = 1; i <= n; i++){
		std::cin>>m>>o;
		total = 0;
		r = ceil(pow(m, 1.0/3.0));
		while(1){
			if(pow(r, 3) <= o){
				r++;
				total++;
			}else{
				break;
			}
		}
		std::cout<<"Case #"<<i<<": "<<total<<std::endl;
	}
	return 0;
}