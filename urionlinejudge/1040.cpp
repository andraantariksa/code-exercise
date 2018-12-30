#include <iostream>
#include <iomanip>

float a, b, c, d, e, average;

int main(){
    std::cin>>a>>b>>c>>d;
    average = (a*2+b*3+c*4+d)/10;
    std::cout<<std::fixed<<std::setprecision(1);
    std::cout<<"Media: "<<average<<std::endl;
    if(average >= 7.0){
        std::cout<<"Aluno aprovado."<<std::endl;
    }else if(average < 5.0){
        std::cout<<"Aluno reprovado."<<std::endl;
    }else{
        std::cout<<"Aluno em exame."<<std::endl;
        std::cin>>e;
        std::cout<<"Nota do exame: "<<e<<std::endl;
        if((average+e)/2 >= 5){
            std::cout<<"Aluno aprovado."<<std::endl;
        }else{
            std::cout<<"Aluno reprovado."<<std::endl;
        }
        std::cout<<"Media final: "<<(average+e)/2<<std::endl;
    }
    return 0;
}