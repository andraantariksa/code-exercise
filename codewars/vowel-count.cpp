#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  for(auto i: inputStr){
    if(i == 'a' || i == 'u' || i == 'e' || i == 'o' || i == 'i'){
      num_vowels++;
    }
  }
  return num_vowels;
}
