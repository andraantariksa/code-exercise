/*input
5
.....
.XXX.
.XXX.
.XXX.
.....
*/
#include <iostream>

int main(){
	int n, total = 0;
	char inp;
	std::cin>>n;
	char arr[n][n];
	for(int i_y = 0; i_y < n; i_y++){
		for (int i_x = 0; i_x < n; i_x++){
			std::cin>>inp;
			arr[i_y][i_x] = inp;
		}
	}
	for(int i_y = 0; i_y < n; i_y++){
		for (int i_x = 0; i_x < n; i_x++){
			if(i_y == 0 || i_x == 0 || i_y == n-1 || i_x == n-1){
				continue;
			}
			if(arr[i_y][i_x] == 'X'){
				if(arr[i_y-1][i_x-1] == 'X' && arr[i_y-1][i_x+1] == 'X' && arr[i_y+1][i_x+1] == 'X' && arr[i_y+1][i_x-1] == 'X'){
					total++;
				}
			}
		}
	}
	std::cout<<total<<std::endl;
	return 0;
}