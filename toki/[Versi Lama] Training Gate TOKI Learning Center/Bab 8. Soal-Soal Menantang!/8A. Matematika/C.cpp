#include <iostream>
 
// sum of largest odd factor of numbers 1 to n
 
 unsigned long long biggestOddFactor(unsigned long long int n)
 {
    // return the biggest odd factor of a number
     while(n%2 == 0)
         n /= 2;
     return n;
 }
 
 unsigned long long naive(unsigned long long int n)
 {
    // sum the biggest odd factors of numbers from 1 to n
    // without any optimizations
     unsigned long long int ret = 0;
     for (unsigned long long int j = 1; j <= n; ++j)
         ret += biggestOddFactor(j);
     return ret;
 }
 
 unsigned long long oddsOnly (unsigned long long min, unsigned long long max);
 unsigned long long evensOnly (unsigned long long min, unsigned long long max);
 
 unsigned long long smart (unsigned long long min, unsigned long long max)
 {
    // sum the biggest odd factors of numbers from min to max (inclusive)
    // by summing the odds and evens separately
     if (min == max)
         return biggestOddFactor(min);
 
     return oddsOnly(min, max) + evensOnly(min, max);
 }
 
 unsigned long long oddsOnly (unsigned long long min, unsigned long long max)
 {
    // sum the odd numbers from min to max (inclusive)
    // using the rule that the sum of the first n odd numbers is n^2
     unsigned long long ret = 0;
     if ((min % 2) != 0)
         ++min;
     if ((max % 2) != 0)
         --max;
     if (min > max)
         return 0;
     if (min == max)
         return min;
     ++max;
     return (max*max - min*min)/4;
 }
 
 unsigned long long evensOnly (unsigned long long min, unsigned long long max)
 {
    // sum the largest odd factors of numbers from min to max (inclusive)
    // using the rule that the sum of largest odd factors of even numbers is
    // the same as for half those numbers
     unsigned long long ret = 0;
     if ((min % 2) == 0)
         ++min;
     if ((max % 2) == 0)
         --max;
     if (max < min)
         return 0;
     if (max == min)
         return biggestOddFactor (max);
     return oddsOnly (min/2, max/2) + evensOnly (min/2, max/2);
 }
 
 int main()
 {
      unsigned long long int q, w = 0;
      std::cin>>q;
      if(q == 1){
      	w = 1;
      }else if(q == 2){
      	w = 2;
      }else if(q == 3){
      	w = 5;
      }else if(q%2 == 0){
      	w = smart(1, q);
      }else{
      	w = smart(1, q-1)+q;
      }
      std::cout<<w<<std::endl;
 }