/*input
5
1 2 3 4 5
*/
#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]){
	int a;
	std::cin>>a;
	int arr[a];
	for(int i = 0; i < a; i++){
		std::cin>>arr[i];
	}
	std::reverse(arr, arr+a);
	std::cout<<arr[0];
	for(int i = 1; i < a; i++){
		std::cout<<","<<arr[i];
	}
	std::cout<<std::endl;
	return 0;
}