/*input
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
*/
#include <unordered_map>
#include <iostream>
#include <vector>

int main() {
    int n, f;
    std::string a, b;
    std::unordered_map<std::string, std::string> umap;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>a>>b;
        umap[a] = b;
    }
    while(std::cin>>b){
        try{
            a = umap.at(b);
            std::cout<<b<<"="<<a<<std::endl;
        }catch(...){
            std::cout<<"Not found"<<std::endl;
        }
    }
    return 0;
}
