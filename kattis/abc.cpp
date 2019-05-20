#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;
typedef float f32;
typedef double f64;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i32 arr[3];
    cin>>arr[0]>>arr[1]>>arr[2]>>ws;
    auto result = minmax({ arr[0], arr[1], arr[2] });
    i32 abc[3] = {result.first, 0, result.second};
    for(auto i: arr){
        if(i != result.first && i != result.second){
            abc[1] = i;
        }
    }
    std::string s;
    bool first = true;
    getline(cin, s);
    for(char c: s){
        if(!first){
            cout<<' ';
        }else{
            first = false;
        }
        switch (c) {
            case 'A':
                cout<<abc[0];
                break;
            case 'B':
                cout<<abc[1];
                break;
            case 'C':
                cout<<abc[2];
                break;
        }
    }
    return 0;
}
