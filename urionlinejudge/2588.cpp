/*input
batata
aabb
abc
*/
#include <iostream>
#include <unordered_map>

int main(){
	std::string s;
	int even, odd;
	std::unordered_map<char, int> umap;
	while(getline(std::cin, s)){
		even = 0;
		odd = 0;
		umap.clear();
		for(int i = 0; i < s.length(); i++){
			umap[s[i]] = umap[s[i]]+1;
		}
		for(auto i:umap){
			if(i.second%2 == 0){
				even++;
			}else{
				odd++;
			}
		}
		if(odd > 0){
			std::cout<<odd-1<<std::endl;
		}else{
			std::cout<<0<<std::endl;
		}
	}
	return 0;
}