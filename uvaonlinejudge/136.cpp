#include <bits/stdc++.h>

int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

int main(){
    int ugly[2000];
    ugly[0] = 1;
    int i = 1, t_2 = 0, t_3 = 0, t_5 = 0, t_2_, t_3_, t_5_;
    while(i < 1500){
        t_2_ = 2*ugly[t_2];
        t_3_ = 3*ugly[t_3];
        t_5_ = 5*ugly[t_5];
        ugly[i] = min(t_2_, min(t_3_, t_5_));
        if(t_2_ == ugly[i]){
            t_2++;
        }
        if(t_3_ == ugly[i]){
            t_3++;
        }
        if(t_5_ == ugly[i]){
            t_5++;
        }
        i++;
    }
    std::cout<<ugly[1499]<<'\n';
    return 0;
}
