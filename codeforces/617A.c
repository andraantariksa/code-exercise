/*input
5
*/
#include <stdio.h>

int a;

int main(){
	scanf("%d", &a);
	printf("%d\n", (a%5 != 0)?a/5+1:a/5);
	return 0;
}