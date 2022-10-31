#include "intruso.hpp"
#include <iterator>
#include <vector>

Intruso::Intruso(){

};

std::string Intruso::organizador(std::string senha){
    std::vector <char> separator;
    std::vector <std::string> uniao;
    std::string junta = " ";

    printf("Passo 1\n");
    for(char& i : senha) {
        separator.push_back(i);
    }

    printf("Passo 2\n");
    for (int c = 0; c < senha.length(); c++){
            junta = separator[c];
            junta += separator[c+1];
            uniao.push_back(junta);
        c++;
    }

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
    
}

void Intruso::set_senha_vazada(std::string vazou){
    //ideias teóricas
    _senhas.push_back(vazou);
    organizador(vazou);
};


std::string Intruso::crack_senha(){
    printf("Passo 4\n");
    std::map<std::string, std::string>::iterator itr;
    int contmap[10], most_rep = 0, store;

    for (int s = 0; s < 5; s++){
        switch (s)
        {
        case 0:
            for (int l = 0; l < 10; l++){
                contmap[l] = 0;
            }

            for (auto& itr: _mapa){
                if (itr.first == "A"){
                        for(char& i : itr.second){
                        contmap[int(i)-48]++;
                    }
                }
            }

            for (int c = 0; c < 10; c++){
                if (contmap[c] > most_rep){
                    most_rep = contmap[c];
                    store = c;
                }
            }
            _senhacrackeada += std::to_string(store);
            most_rep = 0;
            break;

        case 1:
            for (int l = 0; l < 10; l++){
                contmap[l] = 0;
            }

            for (auto& itr: _mapa){
                if (itr.first == "B"){
                        for(char& i : itr.second){
                        contmap[int(i)-48]++;
                    }
                }
            }

            for (int c = 0; c < 10; c++){
                if (contmap[c] > most_rep){
                    most_rep = contmap[c];
                    store = c;
                }
            }
            _senhacrackeada += std::to_string(store);
            most_rep = 0;
            break;

        case 2:
            for (int l = 0; l < 10; l++){
                contmap[l] = 0;
            }

            for (auto& itr: _mapa){
                if (itr.first == "C"){
                        for(char& i : itr.second){
                        contmap[int(i)-48]++;
                    }
                }
            }

            for (int c = 0; c < 10; c++){
                if (contmap[c] > most_rep){
                    most_rep = contmap[c];
                    store = c;
                }
            }
            _senhacrackeada += std::to_string(store);
            most_rep = 0;
            break;

        case 3:
            for (int l = 0; l < 10; l++){
                contmap[l] = 0;
            }

            for (auto& itr: _mapa){
                if (itr.first == "D"){
                        for(char& i : itr.second){
                        contmap[int(i)-48]++;
                    }
                }
            }

            for (int c = 0; c < 10; c++){
                if (contmap[c] > most_rep){
                    most_rep = contmap[c];
                    store = c;
                }
            }
            _senhacrackeada += std::to_string(store);
            most_rep = 0;
            break;

        case 4:
            for (int l = 0; l < 10; l++){
                contmap[l] = 0;
            }

            for (auto& itr: _mapa){
                if (itr.first == "E"){
                        for(char& i : itr.second){
                        contmap[int(i)-48]++;
                    }
                }
            }

            for (int c = 0; c < 10; c++){
                if (contmap[c] > most_rep){
                    most_rep = contmap[c];
                    store = c;
                }
            }
            _senhacrackeada += std::to_string(store);
            most_rep = 0;
            break;
        
        default:
            break;
        }
    }

    printf("Passo 5\n");
    return _senhacrackeada;
}