/*input
1 2 3
4 5 6
7 8 9
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int arr[3][3];
	for(int y = 0; y < 3; y++){
		for(int x = 0; x < 3; x++){
			std::cin>>arr[y][x];
		}
	}
	for(int y = 0; y < 3; y++){
		for(int x = 0; x < 3; x++){
			if(x != 0){
				std::cout<<" ";
			}
			std::cout<<arr[x][y];
		}
		std::cout<<std::endl;
	}
	return 0;
}