#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    float b;
    string str;
    cin>>a>>b>>ws;
    getline(cin, str);
    cout<<fixed<<setprecision(1);
    cout<<a+i<<endl<<b+d<<endl<<s<<str<<endl;
    return 0;
}