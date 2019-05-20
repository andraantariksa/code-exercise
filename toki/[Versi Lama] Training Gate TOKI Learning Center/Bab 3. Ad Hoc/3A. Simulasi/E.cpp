/*input
5 6
1 3
4 2
5 2
4 5
3 2
4 1
3
2
3
4
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int a, b, c, d, temp, e, f;
	std::cin>>a>>b;
	int arr[a+1];
	for(int i = 0; i < a+1; i++){
		arr[i] = i;
	}
	for(int i = 0; i < b; i++){
		std::cin>>c>>d;
		temp = arr[c];
		arr[c] = arr[d];
		arr[d] = temp;
	}
	std::cin>>e;
	for(int i = 0; i < e; i++){
		std::cin>>f;
		std::cout<<arr[f]<<'\n';
	}
	return 0;
}