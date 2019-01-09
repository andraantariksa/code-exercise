//https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/50/problems/222/
#include <stdio.h>
#include <string.h>

unsigned int t, n, m, i, j, pass;
char check[6];

void swap_i(unsigned int *x, unsigned int *y){ 
    unsigned int temp = *x; 
    *x = *y; 
    *y = temp;
}

void swap_s(char **x, char **y){
    char *temp = *x;
    *x = *y;
    *y = temp;
} 

int main() {
	scanf("%u", &t);
	while(t--){
		scanf("%u %u", &n, &m);
		char id[n][6];
		unsigned int s[3][n], total[n];
		scanf("%s", check);
		for(i = 0; i < n; i++){
			scanf("%s %u %u %u", id[i], &s[0][i], &s[1][i], &s[2][i]);
		}
		for(i = 0; i < 3; i++){
			total[i] = (s[2][i]*1000000)+(s[1][i]*1000)+(s[0][i]*1);
		}
		for(i = 0; i < n-1; i++){
	        for(j = 0; j < n-i-1; j++){  
	           if(total[j] < total[j+1]){
	              swap_i(&total[j], &total[j+1]);
	              swap_s(&id[j], &id[j+1]);
	           }
	        }
		}
		pass = 0;
		for(i = 0; i < m; i++){
			//printf("%s %s\n", check, id[i]);
			if(strcmp(id[i], check) == 0){
				pass = 1;
				break;
			}
		}
		if(pass == 1){
			printf("YA\n");
		}else{
			printf("TIDAK\n");
		}
		/*
		for(i = 0; i < n; i++){
			printf("TOTAL %u ID %s\n", total[i], id[i]);
		}
		printf("---------\n");
		*/
	}
	return 0;
}
