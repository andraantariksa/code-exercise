#include <stdio.h>
#include <stdbool.h>
#include <math.h>

unsigned short inpTot, i, divisor, agakPrima;
unsigned long int inp;

int main(){
    scanf("%hu", &inpTot);
    while(inpTot--){
        scanf("%liu", &inp);
        if(inp == 1){
            printf("YA\n");
            continue;
        }
        agakPrima = 1;
        i = 2;
        divisor = 2; 
        if(inp%2 == 0){
            divisor += 1;
        }
        while(i <= sqrt(inp)){
            if(inp%i == 0){
                divisor += 1;
            }
            if(divisor > 4){
                agakPrima = 0;
                break;
            }
            i++;
        }
        if(agakPrima == 1){
            printf("YA\n");
        }else{
            printf("TIDAK\n");
        }
    }
    return 0;
}