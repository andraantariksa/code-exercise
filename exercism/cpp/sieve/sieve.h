#include <vector>
#include <cmath>

namespace sieve {
    const std::vector<int> primes(int n){
        std::vector<bool> sieve_check(n + 1, true);
        sieve_check[0] = false;
        sieve_check[1] = false;
        for (int i = 2; i <= sqrt(n); i++) {
            if (sieve_check[i]){
                for (int j = i * i; j <= n; j += i) {
                    sieve_check[j] = false;
                }
            }
        }
        std::vector<int> sieve;
        for (std::vector<int>::size_type i = 2; i < sieve_check.size(); i++) {
            if (sieve_check[i]){
                sieve.push_back(i);
            }
        }
        return sieve;
    }
}
