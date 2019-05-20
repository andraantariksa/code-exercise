/*input
7
10 10 58 31 63 40 76
*/
#include <iostream>

int tot, temp, mini, maxi, miniVal, maxiVal;

int main(){
	std::cin>>tot;
	int arr[tot];
	for(int i = 0; i < tot; i++){
		std::cin>>temp;
		arr[i] = temp;
	}
	miniVal = 101;
	for(int i = 0; i < tot; i++){
		if(arr[i] <= miniVal){
			miniVal = arr[i];
			mini = i;
		}
	}
	maxiVal = 0;
	for(int i = 0; i < tot; i++){
		if(arr[i] >= maxiVal){
			maxiVal = arr[i];
			maxi = i;
		}
	}
	if(arr[0] == maxiVal && arr[tot-1] == miniVal){
		std::cout<<0<<std::endl;
		return 0;
	}
	std::cout<<maxi+(tot-1-mini)-(mini<maxi?1:0)<<std::endl;
	return 0;
}