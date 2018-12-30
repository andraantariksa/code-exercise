#include <stdio.h>

unsigned short inpTot, solution, sure, a, b, c;

int main(){
    scanf("%hu", &inpTot);
    solution = 0;
    while(inpTot--){
        sure = 0;
        scanf("%hu %hu %hu", &a, &b, &c);
        sure += a;
        sure += b;
        sure += c;
        if(sure >= 2){
            solution += 1;
        }
    }
    printf("%hu", solution);
    return 0;
}