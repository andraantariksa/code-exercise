#include <stdio.h>

unsigned int res[3], total;
unsigned short max, game;

int main(){
    scanf("%u %u %u", &res[0], &res[1], &res[2]);
    if(res[0] > res[1] && res[0] > res[2]){
        max = 0;
    }else if(res[1] > res[0] && res[1] > res[2]){
        max = 1;
    }else if(res[2] > res[1] && res[2] > res[0]){
        max = 2;
    }
    if(res[max]%4 == 0){
        game = res[max]/4;
        total = 0;
        for(unsigned short i = 0; i < 3; i++){
            if(i != max){
                total += res[i];
                if(res[i] < game || res[i] > game*2){
                    printf("TIDAK\n");
                    return 0;
                }
            }
        }
        if(total/3 != game){
            printf("TIDAK\n");
        }else{
            printf("YA\n");
        }
    }else{
        printf("TIDAK\n");
    }
    return 0;
}