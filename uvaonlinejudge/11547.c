#include <stdio.h>
#include <math.h>

int main(){
    int a;
    long int b;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        scanf("%ld", &b);
        b = ((((b*63)+7492)*5)-498);
        printf("%ld\n", abs(((b%100)-(b%10))/10));
    }
    return 0;
}
