// Problem: https://www.codechef.com/problems/HS08TEST
#include <stdio.h>

int a;
float b, c;

int main(){
	scanf("%d %f", &a, &b);
	c = b;
	if(a != 0 && a%5 == 0 && a < b && b-(a+0.5) >= 0){
		c -= a+0.5;
	}
	printf("%.2f\n", c);
}