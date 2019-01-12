/*input
2 2
C M
Y Y
*/
#include <iostream>

int a, b;

int main(){
	std::cin>>a>>b;
	char arr[a*b];
	for(int i = 0; i < a*b; i++){
		std::cin>>arr[i];
	}
	for(int i = 0; i < a*b; i++){
		if(arr[i] == 'C' || arr[i] == 'Y' || arr[i] == 'M'){
			std::cout<<"#Color"<<std::endl;
			return 0;
		}
	}
	std::cout<<"#Black&White"<<std::endl;
	return 0;
}