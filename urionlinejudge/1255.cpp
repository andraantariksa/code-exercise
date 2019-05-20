/*input
3
Computers account for only 5% of the country's commercial electricity consumption.
Input
frequency letters
*/
#include <iostream>
#include <algorithm>

int max, total_input;
std::string str, out;

int main(){
	std::cin>>total_input>>std::ws;
	while(total_input--){
		int alph[26] = {0};
		getline(std::cin, str);
		std::transform(str.begin(), str.end(), str.begin(), ::tolower);
		for(char c: str){
			if(std::isalpha(c)){
				alph[c-'a'] += 1;
			}
		}
		max = 0;
		for(int i = 0; i < 26; i++){
			if(alph[i] > max){
				max = alph[i];
			}
		}
		out = "";
		for(int i = 0; i < 26; i++){
			if(alph[i] == max){
				out += (i+'a');
			}
		}
		std::cout<<out<<std::endl;
	}
	return 0;
}