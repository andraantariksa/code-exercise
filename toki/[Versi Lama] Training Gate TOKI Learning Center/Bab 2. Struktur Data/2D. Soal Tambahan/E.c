#include <stdio.h>
#include <limits.h>

int inpTot;
long double sum = 0, avg, min = LONG_MAX, max = LONG_MIN;

int main(){
    scanf("%d", &inpTot);
    long double arr[inpTot];
    for(int i = 0; i<inpTot; i++){
        scanf("%Lf", &arr[i]);
    }
    for(int i = 0; i<inpTot; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    for(int i = 0; i<inpTot; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i = 0; i<inpTot; i++){
        sum += arr[i];
    }
    avg = sum/inpTot;
    printf("%.2Lf %.2Lf %.2Lf\n", min, max, avg);
    return 0;
}