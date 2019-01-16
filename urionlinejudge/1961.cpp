/*input
5 11
1 3 6 12 6 7 2 4 5 8 3
*/
#include <iostream>

int a, b, inp;
bool win;

int main(){
	std::cin>>a>>b;
	win = true;
	int arr[b];
	for(int i = 0; i < b; i++){
		std::cin>>inp;
		arr[i] = inp;
	}
	for(int i = 0; i < b-1; i++){
		if(arr[i+1]-a > arr[i] && arr[i+1] > arr[i]){
			win = false;
			break;
		}
		if(arr[i+1]+a < arr[i] && arr[i+1] < arr[i]){
			win = false;
			break;
		}
	}
	if(win){
		std::cout<<"YOU WIN"<<std::endl;
	}else{
		std::cout<<"GAME OVER"<<std::endl;
	}
	return 0;
}