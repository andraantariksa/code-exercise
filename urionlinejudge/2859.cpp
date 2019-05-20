//Author: Andra Antariksa
//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/2859
#include <iostream>
#include <cmath>
#include <string>

int digitRoot(std::string poweredNum){
	long long int totalNum = 0;
	for(long long int i = 0; i < poweredNum.length(); i++){
		totalNum += std::stoi(i);
	}
	if(totalNum >= 10){
		return digitRoot(std::to_string(totalNum));
	}else{
		return totalNum;
	}
}

int main(int argc, char const *argv[])
{
	long long int B, E;
	std::cin>>B;
	std::cin>>E;
	std::string poweredNum = std::to_string(static_cast<int>(pow(B, E)));
	std::cout<<digitRoot(poweredNum)<<std::endl;
	return 0;
}