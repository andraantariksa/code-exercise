#include <iostream>

int main(int argc, const char *argv[])
{
    int a, b, c;
    std::cin>>a>>b>>c;
    int arr1[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            std::cin>>arr1[i][j];
        }
    }
    int arr2[b][c];
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < c; j++) {
            std::cin>>arr2[i][j];
        }
    }
    int arr3[a][c];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < c; j++) {
            arr3[i][j] = 0;
            for (int k = 0; k < b; k++) {
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < c; j++) {
            if(j != 0){
                std::cout<<' ';
            }
            std::cout<<arr3[i][j];
        }
        std::cout<<'\n';
    }
    return 0;
}
