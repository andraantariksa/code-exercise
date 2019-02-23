/*input
3
2 1 3
*/
#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]){
	int n;
	std::cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		std::cin>>arr[i];
	}
	int arr1[n], arr2[n];
	std::copy(arr, arr+n, arr1);
	std::copy(arr, arr+n, arr2);
	if(std::prev_permutation(arr1, arr1+n)){
		for(int i = 0; i < n; i++){
			std::cout<<arr1[i];
			if(i != n-1){
				std::cout<<' ';	
			}
		}
		std::cout<<std::endl;
	}
	for(int i = 0; i < n; i++){
		std::cout<<arr[i];
		if(i != n-1){
			std::cout<<' ';	
		}
	}
	std::cout<<std::endl;
	if(std::next_permutation(arr2, arr2+n)){
		for(int i = 0; i < n; i++){
			std::cout<<arr2[i];
			if(i != n-1){
				std::cout<<' ';	
			}
		}
		std::cout<<std::endl;
	}
	return 0;
}