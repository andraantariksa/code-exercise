#include <iostream>

int main(int argc, char const *argv[]){
	int arr[20], i = 20;
	while(i--){
		std::cin>>arr[i];
	}
	for(int i = 0; i < 20; i++){
		std::cout<<"N["<<i<<"] = "<<arr[i]<<std::endl;
	}
	return 0;
}