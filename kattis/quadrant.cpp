/*input
10
-6
*/
#include <iostream>

int x, y, q;

int main(){
	std::cin>>x>>y;
	if(x > 0 && y > 0){
		q = 1;
	}else if(x < 0 && y < 0){
		q = 3;
	}else if(y < 0 && x > 0){
		q = 4;
	}else if(y > 0 && x < 0){
		q = 2;
	}
	std::cout<<q<<std::endl;
	return 0;
}