//Author: Andra Antariksa
//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1019
#include <iostream>

int main(int argc, char const *argv[])
{
	int t;
	std::cin>>t;
	std::cout<< (t/3600) <<":"<< (t%3600/60) <<":"<< (t%60) <<std::endl;
	return 0;
}