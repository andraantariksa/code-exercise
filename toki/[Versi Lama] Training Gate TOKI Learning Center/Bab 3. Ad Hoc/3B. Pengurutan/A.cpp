#include <bits/stdc++.h>

int main(int argc, const char *argv[])
{
    int n;
    std::cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin>>arr[i];
    }
    std::sort(arr, arr+n);
    std::cout<<std::setprecision(2)<<std::fixed;
    if(n%2 != 0){
        std::cout<<(float)arr[n/2]<<'\n';
    }else{
        std::cout<<(arr[n/2]+arr[n/2-1])/2.0<<'\n';
    }
    return 0;
}
