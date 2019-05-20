/*input
2
5 19 17 16 14 12
5 12 14 16 17 18
*/
#include <iostream>
#include <algorithm>

int main(){
	int n, m;
	std::cin>>n;
	for(int i2 = 0; i2 < n; i2++){
		std::cin>>m;
		int p[m];
		for(int i = 0; i < m; i++){
			std::cin>>p[i];
		}
		std::sort(p, p+m);
		std::cout<<"Case "<<i2+1<<": "<<p[m/2]<<std::endl;
	}
}