/*input
map
*/
#include <iostream>
std::string str, alp = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
char pos = 'a';
int move, find, lower, higher;

int main(){
	getline(std::cin, str);
	for(char c: str){
		find = alp.find(pos, 26);
		for(int i = find; i >= 0; i--){
			if(alp[i] == c){
				lower = i;
				break;
			}
		}
		for(int i = find; i < alp.length(); i++){
			if(alp[i] == c){
				higher = i;
				break;
			}
		}
		if(higher-find > find-lower){
			move += find-lower;
		}else{
			move += higher-find;
		}
		pos = c;
	}
	std::cout<<move<<std::endl;
	return 0;
}