/*input
i love you
squirtle squirtle squirtle
chondrocraniums
coal is so dark
lacing your dreams
te t e te t e te t e te
0
*/
#include <iostream>
#include <sstream>

int main(){
	std::string s, buf, max;
	bool first;
	while(1){
		getline(std::cin, s);
		if(s == "0"){
			break;
		}
		std::stringstream ss(s);
		first = true;
		while(ss>>buf){
			if(!first){
				std::cout<<"-";
			}else{
				first = false;
			}
			std::cout<<buf.length();
			if(buf.length() >= max.length()){
				max = buf;
			}
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl<<"The biggest word: "<<max<<std::endl;
	return 0;
}