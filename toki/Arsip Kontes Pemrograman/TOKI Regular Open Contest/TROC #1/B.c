#include <stdio.h>
#include <stdlib.h>

int n, r, v, min;

int main(){
    scanf("%d %d %d", &n, &r, &v);
    int w[n];
    for(unsigned int i = 0; i < n; i++){
        scanf("%d", &w[i]);
    }
    min = v;
    for(unsigned int i = 0; i < n; i++){
        if(w[i] == v){
            printf("-1");
            return 0;
        }
        if(abs(v-w[i]) < abs(min)){
            min = v-w[i];
        }
    }
    printf("%.9f", (double)r/(double)min);
    return 0;
}