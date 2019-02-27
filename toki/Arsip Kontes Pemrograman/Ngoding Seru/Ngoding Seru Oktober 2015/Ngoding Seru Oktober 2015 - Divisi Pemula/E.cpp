#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]){
	int arr[3], c;
	for(int i = 0; i < 3; i++){
		std::cin>>arr[i];
	}
	std::cin>>c;
	std::sort(arr, arr+3);
	if(c == 0){
		std::reverse(arr, arr+3);
	}
	std::cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<std::endl;
	return 0;
}