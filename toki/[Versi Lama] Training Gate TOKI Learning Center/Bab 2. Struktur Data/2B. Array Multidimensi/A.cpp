#include <iostream>

int main(int argc, const char *argv[])
{
    int a, b;
    std::cin>>a>>b;
    int arr[101][101];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            std::cin>>arr[i][j];
        }
    }
    for (int i = 0; i < b; i++) {
        for (int j = a-1; j >= 0; j--) {
            if(j != a-1){
                std::cout<<" ";
            }
            std::cout<<arr[j][i];
        }
        std::cout<<'\n';
    }
    return 0;
}
