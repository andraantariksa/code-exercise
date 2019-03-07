/*input
0
-5
63
0
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int temp;
	for(int i = 0; i < 10; i++){
		std::cin>>temp;
		std::cout<<"X["<<i<<"] = ";
		if(temp <= 0){
			std::cout<<'1';
		}else{
			std::cout<<temp;
		}
		std::cout<<'\n';
	}
	return 0;
}