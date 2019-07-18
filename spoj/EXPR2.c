#include <stdio.h>

int main(int a, int b, int c, char op, int out) {
	if(scanf("%d", &c)){}
	while(c--){
		if(scanf("%d%c%d", &a, &op, &b)){}
		if(op == '*'){
			if(out = a*b){}
		}else if(op == '/'){
			if(out = a/b){}
		}else if(op == '+'){
			if(out = a+b){}
		}else if(op == '-'){
			if(out = a-b){}
		}
		if(printf("%d\n", out)){}
	}
}
