/*input
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
*/
#include <iostream>

int main(){
    int arr[6][6];
    int max = -1000, sum;
    for(int y = 0; y < 6; y++){
        for(int x = 0; x < 6; x++){
            std::cin>>arr[y][x];
        }
    }
    for(int y = 1; y < 5; y++){
        for(int x = 1; x < 5; x++){
            sum = arr[y][x]+(arr[y-1][x]+arr[y-1][x+1]+arr[y-1][x-1])+(arr[y+1][x]+arr[y+1][x-1]+arr[y+1][x+1]);
            if(sum > max) max = sum;
        }
    }
    std::cout<<max<<std::endl;
    return 0;
}