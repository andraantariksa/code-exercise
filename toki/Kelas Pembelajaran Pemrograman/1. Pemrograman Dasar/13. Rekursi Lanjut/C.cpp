/*input
3
*/
#include <iostream>
#include <algorithm>
#include <vector>

std::vector<long int> v;
bool push;

void permute(std::string s, int i, int n){
	int j;
	char temp;
	if(i == n){
		if(s.length() < 3){
			v.push_back(stol(s));
		}else{
			push = true;
			for(int i2 = 1; i2 < s.length()-1; i2++){
				if(!((s[i2-1] < s[i2] && s[i2+1] < s[i2]) || (s[i2-1] > s[i2] && s[i2+1] > s[i2]))){
					push = false;
					break;
				}
			}
			if(push){
				v.push_back(stol(s));
			}
		}
	}else{
		for(j = i; j <= n; j++){
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;      
			permute(s, i+1, n);
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	}
} 

int main(){
	int n;
	std::string s;
	std::cin>>n;
	for(char i = '1'; i <= '0'+n; i++){
		s += i;
	}
	permute(s, 0, n-1);
	std::sort(v.begin(), v.end());
	for(int i = 0; i < ::v.size(); i++){
		std::cout<<v[i]<<std::endl;
	}
	return 0;
}