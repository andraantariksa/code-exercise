/*input
8
<..><.<..>>
<<<..<......<<<<....>
<...<<..>>....>....>>>
><...>
<>>>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>>>>>>>>>>>>><.>
<>
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
*/
#include <iostream>
#include <stack>

int inpTot, tot;
std::string temp;

int main(){
	std::cin>>inpTot>>std::ws;
	while(inpTot--){
		tot = 0;
		std::stack<char> diamond;
		getline(std::cin, temp);
		for(char c: temp){
			if(c == '<'){
				diamond.push('<');
				continue;
			}
			if(c == '>' && !diamond.empty()){
				tot++;
				diamond.pop();
			}
		}
		std::cout<<tot<<std::endl;
	}
}