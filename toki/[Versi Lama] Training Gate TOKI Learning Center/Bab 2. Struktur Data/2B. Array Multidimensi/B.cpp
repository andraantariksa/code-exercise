#include <iostream>

int main(int argc, const char *argv[])
{
    int a, b, c, d;
    std::cin>>a>>b;
    int arr1[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            std::cin>>arr1[i][j];
        }
    }
    std::cin>>c>>d;
    int arr2[c][d];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            std::cin>>arr2[i][j];
        }
    }
    int arr3[a][d];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            arr3[i][j] = 0;
            for (int k = 0; k < c; k++) {
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            if(j != 0){
                std::cout<<' ';
            }
            std::cout<<arr3[i][j];
        }
        std::cout<<'\n';
    }
    return 0;
}
