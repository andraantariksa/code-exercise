#include <iostream>
using namespace std;

int SimpleAdding(int num) {
  return (num * (2 + (num-1)) / 2);
}

int main() {
  cout << SimpleAdding(gets(stdin));
  return 0;
}
