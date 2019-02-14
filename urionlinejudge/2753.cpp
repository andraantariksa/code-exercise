#include <iostream>

int main(){
	int a = 97;
	char b = 'e', c = 'a';
	for(int i = 0; i < 26; i++){
		std::cout<<a<<" "<<b<<" "<<c<<std::endl;
		a++;
		c++;
	}
	return 0;
}
