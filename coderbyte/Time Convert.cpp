#include <iostream>
using namespace std;

string TimeConvert(int num) {
    int hr = num/60;
    int min = num%60;
    return std::to_string(hr)+":"+std::to_string(min);
}

int main() {
    cout << TimeConvert(gets(stdin));
    return 0;
}
