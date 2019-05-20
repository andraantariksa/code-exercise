#include <string>

using namespace std;

string sliceString (string str ){
  if(str.length() == 0){
    return str;
  }
  str.erase(0, 1);
  if(str.length() == 0){
    return str;
  }
  str.erase(str.length()-1, 1);
  return str;
}
