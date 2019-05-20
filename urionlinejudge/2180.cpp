#include<bits/stdc++.h>

bool is_prim(long int n){
    for(long int i = 3; i <= sqrt(n); i += 2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(int argc, const char *argv[]){
    long int fuel_max, sum = 0;
    short prime_c = 0;
    std::cin>>fuel_max;
    if(is_prim(fuel_max)){
        sum += fuel_max;
        prime_c++;
    }
    for(long int i = fuel_max+1; prime_c < 10; i++){
        if(i%2 != 0){
            if(is_prim(i)){
                sum += i;
                prime_c++;
            }
        }
    }
    long int time_tot = (60000000/sum);
    std::cout<<sum<<" km/h\n"<<time_tot<<" h / "<<time_tot/24<<" d\n";
    return 0;
}
