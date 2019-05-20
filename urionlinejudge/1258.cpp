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


struct Order {
    string color;
    char size;
    string name;
};

bool sortOrd(Order a, Order b){
    if(a.color != b.color){
        return a.color < b.color;
    }
    if(a.size != b.size){
        return a.size > b.size;
    }
    return a.name < b.name;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    i32 tot;
    string name, color;
    char size;
    bool first = true;
    while(cin>>tot && tot != 0){
        if(!first){
            cout<<'\n';
        }else{
            first = false;
        }
        Order ord[tot];
        for (i32 i = 0; i < tot; i++) {
            getline(cin, name);
            cin>>color>>size>>ws;
            ord[i].name = name;
            ord[i].color = color;
            ord[i].size = size;
        }
        sort(ord, ord+tot, sortOrd);
        for (i32 i = 0; i < tot; i++) {
            cout<<ord[i].color<<' '<<ord[i].size<<' '<<ord[i].name<<'\n';
        }
    }
    return 0;
}
