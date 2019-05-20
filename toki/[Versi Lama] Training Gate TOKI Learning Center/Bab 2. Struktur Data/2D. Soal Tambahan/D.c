#include <stdio.h>

int inp1, inp2;
char op;

int main(){
    scanf("%d %c %d", &inp1, &op, &inp2);
    if(op == '+'){
        printf("%d\n", inp1+inp2);
    }else if(op == '-'){
        printf("%d\n", inp1-inp2);
    }else if(op == '*'){
        printf("%d\n", inp1*inp2);
    }else if(op == '='){ 
        if(inp1 == inp2){
            printf("benar\n");
        }else{
            printf("salah\n");
        }
    }else if(op == '>'){
        if(inp1 > inp2){
            printf("benar\n");
        }else{
            printf("salah\n");
        }
    }else if(op == '<'){
        if(inp1 < inp2){
            printf("benar\n");
        }else{
            printf("salah\n");
        }
    }
    return 0;
}