/*input
4
1
3
5
2
*/
#include <iostream>
#include <cmath>
#include <vector>

int n, inpTot, inp;
std::vector<int> v, inpArr;

int main(){
	std::cin>>inpTot;
	for(int i = 0; i < inpTot; i++){
		std::cin>>inp;
		inpArr.push_back(inp);
	}
	n = 1000000;
	std::vector<bool> prime(n+1, true);
	for(int p = 2; p <= sqrt(n); p++){
		if(prime[p] == true){
			for(int i = p*p; i <= n; i += p){
				prime[i] = false; 
			}
		}
	}
	for(int p = 2; p <= n; p++){
		if(prime[p]){
			v.push_back(p);
		}
	}
	for(int i: inpArr){
		std::cout<<v[i-1]<<std::endl;
	}
	return 0;
}
/*
 Input: an integer n > 1.
 
 Let A be an array of Boolean values, indexed by integers 2 to n,
 initially all set to true.
 
 for i = 2, 3, 4, ..., not exceeding √n:
   if A[i] is true:
	 for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n:
	   A[j] := false.
 
 Output: all i such that A[i] is true.
 */