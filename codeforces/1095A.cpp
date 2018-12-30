#include <iostream>

unsigned int m, inc, i2;

int main(){
	std::cin>>m>>std::ws;
	inc = 1;
	i2 = 0;
	for(unsigned int i = 0; i < m; ){
		i += inc;
		inc++;
		i2++;
	}
	std::string s, s2 = "";
	getline(std::cin, s);
	inc = 1;
	i2 = 0;
	for(unsigned int i = 0; i < m; ){
		s2 = s2 + s[i];
		i += inc;
		inc++;
		i2++;
	}
	std::cout<<s2<<std::endl;
	return 0;
}