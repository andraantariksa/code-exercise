/*input
CBABCACCC
*/
#include <iostream>

std::string r;
bool cup[3] = {true, false, false}, temp;

int main(){
	getline(std::cin, r);
	for(char i: r){
		if(i == 'A'){
			temp = cup[1];
			cup[1] = cup[0];
			cup[0] = temp;
		}else if(i == 'B'){
			temp = cup[2];
			cup[2] = cup[1];
			cup[1] = temp;
		}else if(i == 'C'){
			temp = cup[2];
			cup[2] = cup[0];
			cup[0] = temp;
		}
	}
	for(int i = 0; i < 3; i++){
		if(cup[i] == true){
			std::cout<<i+1<<std::endl;
			break;
		}
	}
	return 0;
}