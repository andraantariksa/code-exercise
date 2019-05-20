/*input
2
3 2
3 3
*/
#include <iostream>
#include <vector>
#include <algorithm>

int total_case, a, b;
std::vector<int> v;

int main(){
	std::cin>>total_case;
	while(total_case--){
		std::cin>>a>>b;
		for(int i = 1; i <= a; i++){
			v.push_back(i);
		}
		//std::sort(v.begin(), v.end());
		for(int i = 1; i <= b-1; i++){
			std::next_permutation(v.begin(), v.end());
		}
		for(int i = 0; i < v.size(); i++){
			std::cout<<v[i];
			if(i != v.size()-1){
				std::cout<<" ";
			}
		}
		std::cout<<std::endl;
		v.clear();
	}
	return 0;
}