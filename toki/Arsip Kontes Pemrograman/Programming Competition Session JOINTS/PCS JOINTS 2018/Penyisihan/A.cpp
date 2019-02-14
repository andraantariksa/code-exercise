/*input
5 5 10 1
3
7
5
10
8
*/
#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]){
	int n, a, b, c, enemy = 0, superblankon = 0;
	std::cin>>n>>a>>b>>c;
	int arr[n];
	for(int i = 0; i < n; i++){
		std::cin>>arr[i];
	}
	std::sort(arr, arr+n);
	for(int i = 0; i < n; i++){
		if(arr[i] <= a){
			enemy++;
			a += c;
		}else{
			if(arr[i] <= a+b){
				enemy++;
				superblankon++;
				a += c;
				continue;
			}else{
				break;
			}
		}
	}
	std::cout<<enemy<<" "<<superblankon<<std::endl;
	return 0;
}