/*input
2
1
2
*/
#include <iostream>

int a, b;
std::string out;

int main(){
	std::cin>>a;
	for(int i = 1; i <= a; i++){
		std::cin>>b;
		if(b%2 == 0){
			out = "TIDAK CINTA";
		}else{
			out = "CINTA";
		}
		std::cout<<"Kasus #"<<i<<": "<<out<<std::endl;
	}
	return 0;
}