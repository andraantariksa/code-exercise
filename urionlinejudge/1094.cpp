/*input
10
10 C
6 R
15 S
5 C
14 R
9 C
6 R
8 S
5 C
14 R
*/
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]){
	int n, total_[3] = {0}, total[3] = {0}, _total, tmp;
	char c;
	std::cin>>n;
	for(int i = 0; i < n; i++){
		std::cin>>tmp>>c;
		if(c == 'C'){
			total_[0] += tmp;
			total[0]++;
		}else if(c == 'R'){
			total_[1] += tmp;
			total[1]++;
		}else if(c == 'S'){
			total_[2] += tmp;
			total[2]++;
		}
	}
	_total = total_[0]+total_[1]+total_[2];
	std::cout<<std::setprecision(2)<<std::fixed;
	std::cout<<"Total: "<<_total<<" cobaias\nTotal de coelhos: "<<total_[0]<<"\nTotal de ratos: "<<total_[1]<<"\nTotal de sapos: "<<total_[2]<<"\nPercentual de coelhos: "<<(float)total_[0]/_total*100<<" %\nPercentual de ratos: "<<(float)total_[1]/_total*100<<" %\nPercentual de sapos: "<<(float)total_[2]/_total*100<<" %"<<std::endl;
	return 0;
}