//Author: Andra Antariksa
//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1014
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]){
	float d, f;
	std::cin>>d;
	std::cin>>f;
	std::cout<<std::fixed<<std::setprecision(3);
	std::cout<<(d/f)<<" km/l"<<std::endl;
	return 0;
}