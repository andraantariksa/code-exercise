#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        scanf("%d %d %d", &b, &c, &d);
        if(b <= 20 && c <= 20 && d <= 20){
            printf("Case %d: good\n", i);
        }else{
            printf("Case %d: bad\n", i)
        }
    }
    return 0;
}
