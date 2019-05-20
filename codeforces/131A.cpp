/*input
a
*/
#include <iostream>

std::string temp;
bool caps;

int main(){
	getline(std::cin, temp);
	if(temp.length() != 1){
		caps = true;
		for(int i = 1; i < temp.length(); i++){
			if(temp[i] >= 97 && temp[i] <= 122){
				caps = false;
				break;
			}
		}
		if(temp[0] >= 65 && temp[0] <= 95 && caps){
			for(int i = 0; i < temp.length(); i++){
				if(temp[i] >= 65 && temp[i] <= 90){
					temp[i] += 32;
				}
			}
		}else if(caps){
			if(temp[0] >= 97 && temp[0] <= 122){
				temp[0] -= 32;
			}
			for(int i = 1; i < temp.length(); i++){
				if(temp[i] >= 65 && temp[i] <= 90){
					temp[i] += 32;
				}
			}
		}
	}else{
		if(temp[0] >= 97 && temp[0] <= 122){
			temp[0] -= 32;
		}else if(temp[0] >= 65 && temp[0] <= 95){
			temp[0] += 32;
		}
	}
	std::cout<<temp<<std::endl;
	return 0;
}