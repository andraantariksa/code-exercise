/*input
3
The quick brown fox jumps over the lazy dog.
ZYXW, vu TSR Ponm lkj ihgfd CBA.
.,?!'" 92384 abcde FGHIJ
*/

#include <iostream>

int main(int argc, char const *argv[]){
	int a;
	std::string b;
	bool pangram;
	std::cin>>a>>std::ws;
	for(int i = 0; i < a; i++){
		int alpha[26] = {0};
		pangram = true;
		getline(std::cin, b);
		for(auto c: b){
			if(std::isalpha(c) && alpha[std::toupper(c)-65] == 0){
				alpha[std::toupper(c)-65] = 1;
			}
		}
		for(int j = 0; j < 26; j++){
			if(alpha[j] == 0){
				pangram = false;
				break;
			}
		}
		if(pangram){
			std::cout<<"pangram";
		}else{
			std::cout<<"missing ";
			for(int j = 0; j < 26; j++){
				if(alpha[j] == 0){
					std::cout<<(char)(j+97);
				}
			}
		}
		std::cout<<'\n';
	}
	return 0;
}