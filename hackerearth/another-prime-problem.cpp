#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// Sieves of Eratosthenes
	// ii) K is a prime number
	bool* arr = new bool[1000034];
	memset(arr, true, 1000034);
	arr[0] = false;
	arr[0] = false;
	for(long int i = 2; i <= sqrt(1000034); i++){
		if(arr[i]){
			for(long int j = i*i; j < 1000034; j += i){
				arr[j] = false;
			}
		}
	}
	// Special prime
	// iii) K ≡ 1 (mod 11)
	vector<long int> special_prime;
	for(long int j = 23; j < 1000034; j += 11){
		if(arr[j]){
			special_prime.push_back(j);
		}
	}
	long int a, b, l, r, m;
	bool out;
	cin>>a;
	for(long int i = 0; i < a; i++){
		cin>>b;
		// Search for the number
		// i) K >= N

		/*
		Linear search - Time limit obviously :)
		for(long int j = 0; j < special_prime.size(); j++){
			if(special_prime[j] >= b){
				cout<<special_prime[j]<<'\n';
				break;
			}
		}
		*/

		out = false;
		l = 0;
		r = special_prime.size() - 1;
		// binary search
	    while (l <= r) {
	        m = l + (r - l) / 2;
	        // Check if b is present at mid
	        if (special_prime[m] == b){
	            cout<<special_prime[m]<<'\n';
	        	out = true;
	        	break;
	        }
	        // If b greater, ignore left half 
	        if (special_prime[m] < b){
	            l = m + 1;
	        // If b is smaller, ignore right half 
	        }else{
	            r = m - 1;
	        }
	    }
	    if(out){
	    	continue;
	    }
	    // I don't really know what happen below lol :)
	    if(special_prime[m] < b){
	    	cout<<special_prime[m + 1]<<'\n';
	    }else{
	    	cout<<special_prime[m]<<'\n';
	    }
	}
	return 0;
}