/*input
4
1 4 3 2
*/
#include <iostream>
#include <algorithm>

int main(){
	int n;
	std::cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		std::cin>>arr[i];
	}
	std::reverse(arr, arr+n);
	for(int i = 0; i < n; i++){
		std::cout<<arr[i];
		if(i != n-1){
			std::cout<<" ";
		}else{
			std::cout<<std::endl;
		}
	}
	return 0;
}