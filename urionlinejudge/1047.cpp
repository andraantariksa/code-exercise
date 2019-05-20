#include <iostream>

int h_init, m_init, h_after, m_after, h_total, m_total;

int main(){
    std::cin>>h_init>>m_init>>h_after>>m_after;
    h_total = h_after-h_init;
    m_total = m_after-m_init;
    if(h_total < 0){
        h_total = 24+h_total;
    }
    if(m_total < 0){
        h_total -= 1;
        m_total = 60+m_total;
    }
    if(h_init == h_after && m_init == m_after){ h_total = 24; m_total = 0; }
    std::cout<<"O JOGO DUROU "<<h_total<<" HORA(S) E "<<m_total<<" MINUTO(S)"<<std::endl;
    return 0;
}