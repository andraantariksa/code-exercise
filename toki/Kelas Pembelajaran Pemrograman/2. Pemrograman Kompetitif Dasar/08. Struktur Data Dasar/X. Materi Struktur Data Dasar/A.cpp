/*input
7
push_back 1
push_back 2
push_front 3
push_back 4
push_front 5
pop_back
pop_front
*/
#include <iostream>
#include <vector>

int inpTot, inp;
std::string act;

class StackAndQueue{
	public:
		//StackAndQueue();
		//~StackAndQueue();
		std::vector<int> vect;
		void push_front(int input){
			vect.insert(vect.begin(), input);
		}
		void push_back(int input){
			vect.push_back(input);
		}
		void pop_front(){
			vect.erase(vect.begin());
		}
		void pop_back(){
			vect.pop_back();
		}
		std::vector<int> vector(){
			return vect;
		}
};

int main(){
	std::cin>>inpTot;
	StackAndQueue s;
	while(inpTot--){
		std::cin>>act;
		if(act == "push_back"){
			std::cin>>inp;
			s.push_back(inp);
		}else if(act == "push_front"){
			std::cin>>inp;
			s.push_front(inp);
		}else if(act == "pop_back"){
			s.pop_back();
		}else if(act == "pop_front"){
			s.pop_front();
		}
	}
	for(int i: s.vector()){
		std::cout<<i<<std::endl;
	}
	return 0;
}