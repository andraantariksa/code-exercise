/*input
26
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
101
*/
#include <iostream>
#include <cmath>

bool break_;
long int a, b;

int main(){
	std::cin>>a;
	while(a--){
		std::cin>>b;
		if(b == 1 || (b%2 == 0 && b != 2)){
			std::cout<<"BUKAN"<<std::endl;
		}else if(b == 2 || b == 3){
			std::cout<<"YA"<<std::endl;
		}else{
			break_ = false;
			for(long int i = 3; i <= sqrt(b); i = i+2){
				if(b%i == 0){
					std::cout<<"BUKAN"<<std::endl;
					break_ = true;
					break;
				}
			}
			if(break_ == true){
				continue;
			}
			std::cout<<"YA"<<std::endl;
		}
	}
	return 0;
}