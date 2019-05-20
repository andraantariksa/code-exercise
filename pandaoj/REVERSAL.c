/*input
5
1 2 3 4 5
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	unsigned int a, b;
	scanf("%u", &a);
	unsigned int c[a];
	for(int i = 0; i < a; i++){
		scanf("%u", &b);
		c[i] = b;
	}
	printf("%u", c[a-1]);
	for(int i = a-2; i >= 0; i--){
		printf(" %u", c[i]);
	}
	printf("\n");
	return 0;
}