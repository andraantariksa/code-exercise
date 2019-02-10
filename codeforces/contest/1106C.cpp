/*input
6
1 1 1 2 2 2
*/
#include <iostream>
#include <algorithm>

int main(){
	int n, temp;
	std::cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		std::cin>>temp;
		arr[i] = temp;
	}
	std::sort(arr, arr+n);
	long long int total = 0;
	for(int i = 0; i < n/2; i++){
		total += (arr[i]+arr[n-(1+i)])*(arr[i]+arr[n-(1+i)]);
	}
	std::cout<<total<<std::endl;
	return 0;
}