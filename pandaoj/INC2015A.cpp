/*input
4
10
100 89 45 78 66 50 30 90 95 60
1
100
5
45 20 31 59 0
7
80 49 75 90 88 95 62
*/
#include <iostream>

int a, b, c, tot;

int main(){
	std::cin>>a;
	for(int i = 1; i <= a; i++){
		std::cin>>b;
		tot = 0;
		while(b--){
			std::cin>>c;
			if(c < 60){
				tot += 1;
			}
		}
		std::cout<<"Case #"<<i<<": "<<tot<<std::endl;
	}
	return 0;
}