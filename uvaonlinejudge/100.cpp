#include <bits/stdc++.h>

unsigned int _3nplus1(unsigned int n){
    unsigned int cycle = 1;
    while(n != 1){
        if(n%2 != 0){
            n = (3*n+1)/2; // odd number * 3 + 1 = even number, so we can just devide it by 2
            cycle += 2; // and the cycle will be faster this way
        }else{
            n /= 2;
            cycle += 1;
        }
    }
    return cycle;
}

int main(){
    unsigned int a, b, c, max_cycle;
    while(std::cin>>a>>b){
        max_cycle = 0;
        std::cout<<a<<' '<<b<<' ';
        if(a > b){
            c = b;
            b = a;
            a = c;
        }
        for(unsigned int i = a; i <= b; i++){
            c = _3nplus1(i);
            if(c > max_cycle){
                max_cycle = c;
            }
        }
        std::cout<<max_cycle<<'\n';
    }
    return 0;
}
