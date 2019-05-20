#include <cmath>

bool is_square(int n)
{
  int rt = sqrt(n);
  if(rt*rt == n){
    return true;
  }else{
    return false;
  }
}
