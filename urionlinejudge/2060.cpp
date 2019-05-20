#include <iostream>

int main(){
	int n, m[4] = {0};
	std::cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		std::cin>>arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i]%2 == 0){
			m[0]++;
		}
		if(arr[i]%3 == 0){
			m[1]++;
		}
		if(arr[i]%4 == 0){
			m[2]++;
		}
		if(arr[i]%5 == 0){
			m[3]++;
		}
	}
	std::cout<<m[0]<<" Multiplo(s) de 2\n"<<m[1]<<" Multiplo(s) de 3\n"<<m[2]<<" Multiplo(s) de 4\n"<<m[3]<<" Multiplo(s) de 5"<<std::endl;
	return 0;
}
