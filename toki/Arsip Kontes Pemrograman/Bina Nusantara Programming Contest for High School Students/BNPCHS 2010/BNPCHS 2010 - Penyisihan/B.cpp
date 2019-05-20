/*input
3
6
10 15 20 9 100 4
5
1 2 3 4 5
10
100 0 39 123 1000 900 400 100 250 555
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[]){
	int a, b, temp;
	std::vector<int> v;
	std::cin>>a;
	for(int i = 0; i < a; i++){
		std::cin>>b;
		for(int j = 0; j < b; j++){
			std::cin>>temp;
			v.push_back(temp);
		}
		std::sort(v.begin(), v.end());
		std::reverse(v.begin(), v.end());
		temp = 0;
		for(int j = 0; j < 5; j++){
			temp += v[j];
		}
		std::cout<<temp<<std::endl;
		//std::cout<<"aa"<<std::endl;
		v.clear();
	}
	return 0;
}