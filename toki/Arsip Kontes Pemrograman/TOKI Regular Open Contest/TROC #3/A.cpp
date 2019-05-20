#include <iostream>
#include <algorithm>

int money, A, B, C, total, i_total;

int main(int argc, char const *argv[])
{
	std::cin>>money;
	std::cin>>A>>B>>C;

	int ABC[3] = { 0, 0, 0};
	int ABC_s[3] = { A, B, C};
	std::sort(ABC_s, ABC_s+3);

	total = A+B+C;
	i_total = 0;
	
	while(i_total <= money){
		ABC[0]++;
		ABC[1]++;
		ABC[2]++;
		i_total += total;
	}

	ABC[0]--;
	ABC[1]--;
	ABC[2]--;
	i_total -= total;

	for(int i = 0; i < 3; i++){
		if(i_total + ABC_s[i] <= money){
			ABC[i]++;
			i_total += ABC_s[i];
		}else{
			continue;
		}
	}
	std::cout<<ABC[0]+ABC[1]+ABC[2]<<std::endl;
	return 0;
}