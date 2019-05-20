#include <bits/stdc++.h>

int main(int argc, const char *argv[]){
    short n, inp;
    long int sum;
    scanf("%hi", &n);
    for(short i = 0; i < n; i++) {
        scanf("%hi", &inp);
        sum = 0;
        for(short j = 0; j < inp; j++){
            sum += pow(2, j);
        }
        printf("%ld\n", sum);
    }
    return 0;
}
