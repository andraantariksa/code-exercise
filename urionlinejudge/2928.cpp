/*input
7
-----
.....
.....
.....
-----
-----
.....
*/
#include <iostream>

int main(int argc, char const *argv[]){
	int n, total = 0, jumpS = 0;
	std::string s;
	std::cin>>n>>std::ws;
	while(n--){
		getline(std::cin, s);
		if(s[0] == '.'){
			if(jumpS == 0){
				total++;
			}
			jumpS++;
		}else{
			jumpS = 0;
		}
		if(jumpS > 2){
			std::cout<<'N'<<std::endl;
			return 0;
		}
	}
	std::cout<<total<<std::endl;
	return 0;
}