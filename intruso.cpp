#include "intruso.hpp"
#include <iterator>
#include <vector>

Intruso::Intruso(){

};
std::string Intruso::organizador(std::string senha){
    std::vector <char> separator;
    std::vector <std::string> uniao;
    std::string junta = " ";
    //os numeros devem ser associados a letras, mas as letras não estão na senha

    printf("Passo 1\n");
    for(char& i : senha) {
        separator.push_back(i);
        std::cout << i << std::endl;
    }

    printf("Passo 2\n");
    for (int c = 0; c < senha.length(); c++){
            junta = separator[c];
            junta += separator[c+1];
            uniao.push_back(junta);
        c++;
    }

    //debug
    /**
    printf("Passo 2.5\n");
    for(std::string& s : uniao) {
        std::cout << s << std::endl;
    }**/

    printf("Passo 3\n");
    for (int c = 0; c < uniao.size(); c++){
        switch (c)
        {
        case 0:
            _mapa.insert(std::pair<std::string, std::string>("A", uniao[c]));
            break;

        case 1:
            _mapa.insert(std::pair<std::string, std::string>("B", uniao[c]));
            break;

        case 2:
            _mapa.insert(std::pair<std::string, std::string>("C", uniao[c]));
            break;

        case 3:
            _mapa.insert(std::pair<std::string, std::string>("D", uniao[c]));
            break;

        case 4:
            _mapa.insert(std::pair<std::string, std::string>("E", uniao[c]));
            break;
        
        default:
            break;
        }
    }

    std::map<std::string, std::string>::iterator itr;

    for(itr=_mapa.begin();itr!=_mapa.end();itr++)
    {
        std::cout<<itr->first<<" "<<itr->second<<std::endl;
    }
}

void Intruso::set_senha_vazada(std::string vazou){
    //ideias teóricas
    _senhas.push_back(vazou);
    organizador(vazou);
};


std::string Intruso::crack_senha(){
    //wip
}