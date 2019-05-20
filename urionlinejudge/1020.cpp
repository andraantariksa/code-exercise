//Author: Andra Antariksa
//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1020
#include <iostream>

int main(int argc, char const *argv[])
{
	int d;
	std::cin>>d;
	std::cout<<(d/365)<<" ano(s)"<<std::endl;
	std::cout<<(d%365/30)<<" mes(es)"<<std::endl;
	std::cout<<(d%365%30)<<" dia(s)"<<std::endl;
	return 0;
}