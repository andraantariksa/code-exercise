#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i = 0; i < a; i++){
        cin>>b[i];
    }
    sort(b, b+a);
    for(int i = 0; i < a; i++){
        if(i != 0){
            cout << ' ';
        }
        cout << b[i];
    }
    cout << '\n';
    return 0;
}
