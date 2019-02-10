/*input
6
5 3
2 30
2 100
30 20
15 5
30 2
*/
#include <iostream>
#include <cmath>

int rafael(int x, int y){
	return (3*x)*(3*x)+(y*y);
}

int beto(int x, int y){
	return 2*(x*x)+(5*y)*(5*y);
}

int carlos(int x, int y){
	return -100*x+(y*y*y);
}

int main(int argc, char const *argv[]){
	int n, x, y, max, pos;
	std::cin>>n;
	for(int i = 0; i < n; i++){
		std::cin>>x>>y;
		int arr[3] = {rafael(x, y), beto(x, y), carlos(x, y)};
		max = -99999;
		pos = 0;
		for(int i = 0; i < 3; i++){
			//std::cout<<">"<<arr[i]<<std::endl;
			if(arr[i] > max){
				pos = i;
				max = arr[i];
			}
		}
		switch(pos){
			case 0:
				std::cout<<"Rafael ganhou"<<std::endl;
				break;
			case 1:
				std::cout<<"Beto ganhou"<<std::endl;
				break;
			case 2:
				std::cout<<"Carlos ganhou"<<std::endl;
				break;
		}
	}
	return 0;
}