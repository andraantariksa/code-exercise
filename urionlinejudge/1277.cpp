/*input
4
1
Justin
PAAPP
2
Justin Chris
PAAPP PPPPA
1
Sunny
PPPAM
4
Mansi Arjun Nikhil Taneja
PPPPMPPAPP AAMAAPP PPPPAAP PPPAAAMPP
*/
#include <iostream>
#include <vector>

int main(){
	int n, m;
	std::string s;
	std::vector<std::string> name, attend, not_pass;
	float t_attend, avg;
	int c;
	std::cin>>n;
	while(n--){
		std::cin>>m;
		for(int i = 0; i < m; i++){
			std::cin>>s;
			name.push_back(s);
		}
		for(int i = 0; i < m; i++){
			std::cin>>s;
			attend.push_back(s);
		}
		for(int i = 0; i < m; i++){
			t_attend = 0;
			c = 0;
			avg = 0;
			for(int i2 = 0; i2 < attend[i].length(); i2++){
				if(attend[i][i2] != 'M'){
					if(attend[i][i2] == 'P'){
						t_attend++;
					}
					c++;
				}
			}
			avg = 100.0 * t_attend / (float) c;
			if(avg < 75.0){
				not_pass.push_back(name[i]);
			}
		}
		for(int i = 0; i < not_pass.size(); i++){
			std::cout<<not_pass[i];
			if(i != not_pass.size()-1){
				std::cout<<" ";
			}
		}
		std::cout<<std::endl;
		not_pass.clear();
		attend.clear();
		name.clear();
	}
	return 0;
}