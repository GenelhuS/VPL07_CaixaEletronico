#include "intruso.hpp"
#include <vector>

Intruso::Intruso(){

}

void Intruso::set_senha_vazada(std::string vazou){
    //ideias teóricas
    senhacompleta = vazou;
}

std::string Intruiso::organizador(std::string senhacompleta){
    std::vector <std::string> junta;
    //ideias teóricas
    for (int i = 0; i < 10; i++){
        if (i == 0){
            junta[i] = senhacompleta[i] + senhacompleta[i+1] + senhacompleta[15-i];
            i++;
        }else{
            junta[i-1] = senhacompleta[i] + senhacompleta[i+1] + senhacompleta[15-i];
            i++;
        }
    }   
}

std::string Intruso::crack_senha(){

}