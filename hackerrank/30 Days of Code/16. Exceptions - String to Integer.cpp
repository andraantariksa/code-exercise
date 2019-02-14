/*input
az
*/
#include <iostream>

int main(int argc, char const *argv[]){
	long long int n;
	std::string s;
	try{
		std::cin>>s;
		n = stoll(s);
		std::cout<<n<<std::endl;
	}catch(...){
		std::cout<<"Bad String"<<std::endl;
	}
	return 0;
}