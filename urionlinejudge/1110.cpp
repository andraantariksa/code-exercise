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
    i32 a;
    vector<i32> sq;
    while(cin>>a && a != 0){
        queue<i32> q;
        for(i32 i = 1; i<= a; i++){
            q.push(i);
        }
        for(i32 i = 1; i < a; i++){
            sq.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout<<"Discarded cards: ";
        for (i32 i = 0; i < sq.size(); i++) {
            if(i != sq.size() - 1)
                cout<<sq[i]<<", ";
            else
                cout<<sq[i]<<'\n';
        }
        cout<<"Remaining card: "<<q.front()<<'\n';
        sq.clear();
    }
    return 0;
}
