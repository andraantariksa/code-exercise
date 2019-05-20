/*input
2
*/
#include <iostream>

int main(){
	int n;
	std::cin>>n;
	int arr[n][n];
	if(n == 1){
		std::cout<<1<<std::endl;
		return 0;
	}
	for(int x = 0; x < n; x++){
		arr[0][x] = 1;
	}
	for(int y = 0; y < n; y++){
		arr[y][0] = 1;
	}
	for(int y = 1; y < n; y++){
		for(int x = 1; x < n; x++){
			arr[y][x] = arr[y-1][x]+arr[y][x-1];
		}
	}
	std::cout<<arr[n-1][n-1]<<std::endl;
	return 0;
}