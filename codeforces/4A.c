#include <stdio.h>

unsigned int a;

int main(){
    scanf("%u", &a);
    if(a%2 == 0 && a != 0 && a != 2){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}