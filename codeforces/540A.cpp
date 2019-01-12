/*input
5
82195
64723
*/
#include <iostream>

int n, ori, pas, temp, step;
std::string originalState, passCode;

int main(){
	std::cin>>n>>originalState>>passCode;
	n = 0;
	for(int i = 0; i < originalState.length(); i++){
		ori = originalState[i]-'0';
		pas = passCode[i]-'0';
		temp = pas;
		step = 0;
		while(temp != ori){
			//std::cout<<temp<<std::endl;
			step++;
			temp++;
			if(temp == 10){
				temp = 0;
			}
			if(step > 5){
				temp = pas;
				step = 0;
				while(temp != ori){
					step++;
					temp--;
					if(temp == -1){
						temp = 9;
					}
				}
				break;
			}
		}
		n += step;
	}
	std::cout<<n<<std::endl;
	return 0;
}