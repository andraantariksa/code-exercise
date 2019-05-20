// USE THE MINIFIED VERSION IF YOU WANT TO SUBMIT THIS FILE

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    short mul_2[4] = {2, 4, 8, 6}, mul_3[4] = {3, 9, 7, 1}, mul_8[4] = {8, 4, 2, 6}, mul_7[4] = {7, 9, 3, 1};
    unsigned long int b, c;
    cin>>a;
    for(int i = 0; i < a; i++) {
        cin>>b>>c;
        if((b == 0 && c != 0) || (b == 10 || b == 20)){
            cout<<0;
        }else if(b == 2 || b == 12){
            cout<<mul_2[(c - 1)%4];
        }else if(b == 3 || b == 13){
            cout<<mul_3[(c - 1)%4];
        }else if(b == 8 || b == 18){
            cout<<mul_8[(c - 1)%4];
        }else if(b == 9 || b == 19){
            if(c%2 == 0){
                cout<<1;
            }else{
                cout<<9;
            }
        }else if(b == 7 || b == 17){
            cout<<mul_7[(c - 1)%4];
        }else if(b == 4 || b == 14){
            if(c%2 == 0){
                cout<<6;
            }else{
                cout<<4;
            }
        }else if(c == 0 || b == 1 || b == 11){
            cout<<1;
        }else if(b == 5 || b == 15){
            cout<<5;
        }else if(b == 6 || b == 16){
            cout<<6;
        }
        cout<<'\n';
    }
    return 0;
}
