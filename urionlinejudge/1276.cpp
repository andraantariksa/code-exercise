/*input
aha
xyzzy
quick brown fox jumps over the lazy dog
fbxeac
  x 
 b z a x c y
bdfhjlnprtvxz

az def
*/
#include <iostream>
#include <vector>

int main(){
	std::string s, inp_to_v;
	bool chain;
	std::vector<std::string> v;
	while(getline(std::cin, s)){
		short alpha[27] = {0};
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				alpha[s[i] - 'a'] = 1;
			}
		}
		chain = false;
		for(int i = 0; i < 27; i++){
			if(alpha[i] == 1){
				if(chain == false){
					inp_to_v = "";
					inp_to_v += ((char)('a' + i));
					inp_to_v += ':';
					chain = true;
				}
			}else{
				if(chain == true){
					inp_to_v += ((char)('a' + i - 1));
					v.push_back(inp_to_v);
				}
				chain = false;
			}
		}
		for(int i = 0; i < v.size(); i++){
			std::cout<<v[i];
			if(i != v.size()-1){
				std::cout<<", ";
			}
		}
		std::cout<<std::endl;
		v.clear();
	}
	return 0;
}