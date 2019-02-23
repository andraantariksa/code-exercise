/*input
5
11 -106 -223 -340 -457
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int n, inp, ladder = 0, step;
	std::cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		std::cin>>arr[i];
	}
	if(n == 1){
		std::cout<<1<<std::endl;
		return 0;
	}
	//std::cout<<arr[0]<<std::endl;
	step = 99999999;
	ladder = 0;
	for(int i = 1; i < n; i++){
		//std::cout<<"> "<<arr[i]<<" - "<<arr[i-1]<<" = "<<arr[i]-arr[i-1]<<std::endl;
		if(arr[i]-arr[i-1] != step){
			ladder++;
			step = arr[i]-arr[i-1];
		}
	}
	std::cout<<ladder<<std::endl;
	return 0;
}