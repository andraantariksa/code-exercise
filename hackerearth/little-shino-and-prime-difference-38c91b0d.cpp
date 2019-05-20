/*input
5
1 2 3 4 5
*/
#include <bits/stdc++.h>

int main(int argc, char const *argv[]){
	bool arr[1000001];
	memset(arr, true, sizeof(arr)); 
	arr[0] = 0;
	arr[1] = 0;
	for(unsigned int i = 0; i < sqrt(1000001); i++){
		if(arr[i]){
			for(int j = i*i; j < 1000001; j += i){
				arr[j] = 0;
			}
		}
	}

	unsigned int temp, size, min = 1000000, max = 0;
	std::cin>>size;
	for(unsigned int i = 0; i < size; i++){
		std::cin>>temp;
		if(arr[temp]){
			if(temp > max){
				max = temp;
			}
			if(temp < min){
				min = temp;
			}
		}
	}
	if(max == 0){
		std::cout<<-1<<'\n';
		return 0;
	}
	std::cout<<max-min<<'\n';
	return 0;
}