#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class cException: public exception{
    virtual const char* what() const throw(){
      return "n and p should be non-negative";
    }
} negative;

class Calculator{
    public:
    int power(int n, int p){
        if(n < 0 || p < 0){
            throw negative;
        }
        if(p == 0){
            return 1;
        }
        int total = n;
        for(int i = 0; i < p-1; i++){
            total *= n;
        }
        return total;
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}

