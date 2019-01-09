/*input
6
add 1 1
add 2 2
add 3 3
del 2
rev
del 2
*/
#include <iostream>
#include <vector>
#include <algorithm>

int inpTot, x, y;
std::string act;
std::vector<int> v;

int main(){
	std::cin>>inpTot;
	while(inpTot--){
		std::cin>>act;
		if(act == "add"){
			std::cin>>x>>y;
			while(y--){
				v.push_back(x);
			}
			std::cout<<v.size()<<std::endl;
		}else if(act == "del"){
			std::cin>>x;
			std::cout<<v[0]<<std::endl;
			v.erase(v.begin(), v.begin()+x);
		}else if(act == "rev"){
			std::reverse(v.begin(), v.end());
		}
	}
	return 0;
}