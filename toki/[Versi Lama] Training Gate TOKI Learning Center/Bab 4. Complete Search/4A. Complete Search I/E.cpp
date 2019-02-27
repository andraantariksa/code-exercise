/*input
3
*/
#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char const *argv[]){
	int n;
	bool out_;
	long int num;
	std::string s = "";
	std::vector<std::string> v;
	std::vector<long int> v2;
	std::cin>>n;
	for(int i = 1; i <= n; i++){
		s += ('0' + i);
	}
	do{
		v.push_back(s);
  	}while(std::next_permutation(s.begin(), s.end()));
  	for(std::string i: v){
  		out_ = true;
  		for(int j = 1; j < i.length()-1; j++){
	  		if(!((i[j] < i[j-1] && i[j] < i[j+1]) || (i[j] > i[j-1] && i[j] > i[j+1]))){
	  			out_ = false;
	  			break;
	  		}
	  	}
	  	if(out_){
	  		v2.push_back(stol(i));
	  	}
  	}
  	std::sort(v2.begin(), v2.end());
  	for(long int i: v2){
  		std::cout<<i<<std::endl;
  	}
	return 0;
}
/*
for j in range(1, len(i)-1):
		#print(">{}".format(i[j]))
		if not ((i[j] < i[j-1] and i[j] < i[j+1]) or (i[j] > i[j-1] and i[j] > i[j+1])):
			out_ = False
			break
	if out_:
		num = ""
		for k in i:
			num = num + k
		out.append(int(num))
for i in out:
	print(i)

 */