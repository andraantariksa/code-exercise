/*input
1
++X
*/

#include <iostream>
#include <vector>

int tot = 0;
unsigned short inpTot;
std::string temp;
std::vector<std::string> s;

int main(){
	std::cin>>inpTot>>std::ws;
	for(unsigned short i = 0; i < inpTot; i++){
		getline(std::cin, temp);
		s.push_back(temp);
	}
	for(std::string i: s){
		if(i.find("--") != std::string::npos){
			tot--;
		}else if(i.find("++") != std::string::npos){
			tot++;
		}
	}
	std::cout<<tot<<std::endl;
	return 0;
}