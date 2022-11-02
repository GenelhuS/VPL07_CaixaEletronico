#include "intruso.hpp"

/* PASSO 1 - DONE */
Intruso::Intruso(){
};

int Intruso::get_numsenhas(int num_senhas){
    _numsenhas = num_senhas;
}

void Intruso::set_senha_vazada(std::string vazou){
    _senhas.push_back(vazou);
    formatador(vazou);
};

void Intruso::formatador(std::string senha){
    /* PASSO 2 - LETRAS EM VETOR DE LETRAS, NUMEROS EM VETOR DE NUMEROS */
    std::string car = "", nums = "";
    for (auto& i : senha){
        if(i != (' ') && i != std::string::npos){
            if (i == 'A' || i == 'B' || i == 'C' || i == 'D' || i == 'E'){
                car+= i;
            }else{
                nums+= i;
            }
        }
    }
    _caracteres.push_back(car);
    _numeros.push_back(nums);
    /**std::cout << "car: " << car << std::endl;
    std::cout << "nums: " << nums << std::endl;
    std::cout << "fim do passo 2 " << std::endl;**/
};


std::string Intruso::crack_senha(){
    int indexador = 0, posicao = 0, idletra1 = 0, idletra2 = 0;
    std::string prim = "", sec = "", primchar = "", secchar = "", primnum = "", secnum = "";
    std::string senhaprov1, senhaprov2, senhaprov3;
    if (_numsenhas == 2){
            /* PASSO 3 - REALIZAR A COMPARAÇÃO DE SENHAS E NUMEROS */
            //com base no numero de senhas, fazer um do{}while, onde as comparações são realizadas entre senhas com base no numero de index, de 1 a x
            do{
                prim = _caracteres[indexador];
                sec = _caracteres[indexador + 1];
                /**std::cout << "primeira senha: " << prim << std::endl;
                std::cout << "segunda senha: " << sec << std::endl;
                std::cout << std::endl;**/

                primchar = prim[posicao];
                //std::cout << "primeiro charactere: " << primchar << std::endl;
                if (primchar == "A"){
                    idletra1 = 0;
                }else if (primchar == "B"){
                    idletra1 = 2;
                }else if (primchar == "C"){
                    idletra1 = 4;
                }else if (primchar == "D"){
                    idletra1 = 6;
                }else if (primchar == "E"){
                    idletra1 = 8;
                }
                //std::cout << "idletra 1: " << idletra1 << std::endl;

                secchar = sec[posicao];
                //std::cout << "segundo charactere: " << secchar << std::endl;
                if (secchar == "A"){
                    idletra2 = 0;
                }else if (secchar == "B"){
                    idletra2 = 2;
                }else if (secchar == "C"){
                    idletra2 = 4;
                }else if (secchar == "D"){
                    idletra2 = 6;
                }else if (secchar == "E"){
                    idletra2 = 8;
                }
                /**std::cout << "idletra 2: " << idletra2 << std::endl;
                std::cout << std::endl;**/

                prim = _numeros[indexador];
                sec = _numeros[indexador + 1];
                /**std::cout << "primeira senha: " << prim << std::endl;
                std::cout << "segunda senha: " << sec << std::endl;
                std::cout << std::endl;**/
                for (int i = 0; i < 2; i++){
                    primnum = prim[i + idletra1];
                    for (int j = 0; j < 2; j++){
                        secnum = sec[j + idletra2];
                        /**std::cout << "primeiro algarismo: " << primnum << std::endl;
                        std::cout << "segundo algarismo: " << secnum << std::endl;
                        std::cout << std::endl;**/
                        if (primnum == secnum){
                            _senhacrackeada += primnum;
                            _senhacrackeada += ' ';
                            /**std::cout << "senha crackeada: " << _senhacrackeada << std::endl;
                            std::cout << std::endl;**/
                        }
                    }
                }
                posicao++;
            }while(posicao < 6);
    }else if (_numsenhas == 3){
            /* PASSO 3 - REALIZAR A COMPARAÇÃO DE SENHAS E NUMEROS */
            //com base no numero de senhas, fazer um do{}while, onde as comparações são realizadas entre senhas com base no numero de index, de 1 a x
            /**std::cout << _numeros[0] << std::endl << _numeros[1] << std::endl << _numeros[2];
            std::cout << std::endl;
            std::cout << "Criacao da primeira senha" << std::endl;
            std::cout << std::endl;**/
            do{
                prim = _caracteres[indexador];
                sec = _caracteres[indexador + 1];
                /**std::cout << "primeira senha: " << prim << std::endl;
                std::cout << "segunda senha: " << sec << std::endl;
                std::cout << std::endl;**/

                primchar = prim[posicao];
                if (primchar == "A"){
                    idletra1 = 0;
                }else if (primchar == "B"){
                    idletra1 = 2;
                }else if (primchar == "C"){
                    idletra1 = 4;
                }else if (primchar == "D"){
                    idletra1 = 6;
                }else if (primchar == "E"){
                    idletra1 = 8;
                }

                secchar = sec[posicao];
                /**std::cout << "primeiro charactere: " << primchar << std::endl;
                std::cout << "segundo charactere: " << secchar << std::endl;**/
                if (secchar == "A"){
                    idletra2 = 0;
                }else if (secchar == "B"){
                    idletra2 = 2;
                }else if (secchar == "C"){
                    idletra2 = 4;
                }else if (secchar == "D"){
                    idletra2 = 6;
                }else if (secchar == "E"){
                    idletra2 = 8;
                }
                /**std::cout << "idletra 1: " << idletra1 << std::endl;
                std::cout << "idletra 2: " << idletra2 << std::endl;
                std::cout << std::endl;**/

                prim = _numeros[indexador];
                sec = _numeros[indexador + 1];
                /**std::cout << "primeira senha: " << prim << std::endl;
                std::cout << "segunda senha: " << sec << std::endl;
                std::cout << std::endl;**/
                for (int i = 0; i < 2; i++){
                    primnum = prim[i + idletra1];
                    for (int j = 0; j < 2; j++){
                        secnum = sec[j + idletra2];
                        /**std::cout << "primeiro algarismo: " << primnum << std::endl;
                        std::cout << "segundo algarismo: " << secnum << std::endl;
                        std::cout << std::endl;**/
                        if ((primnum == secnum)){
                                senhaprov1 += primnum;
                                senhaprov1 += ' ';
                                /**std::cout << "senha provisoria 1: " << senhaprov1 << std::endl;
                                std::cout << std::endl;**/
                        }
                    }
                }
                posicao++;
            }while(posicao < 6);
            posicao = 0;

            /**std::cout << "Criacao da segunda senha" << std::endl;
            std::cout << std::endl;**/
            do{
                prim = _caracteres[indexador];
                sec = _caracteres[indexador + 2];
                /**std::cout << "primeira senha: " << prim << std::endl;
                std::cout << "segunda senha: " << sec << std::endl;
                std::cout << std::endl;**/

                primchar = prim[posicao];
                if (primchar == "A"){
                    idletra1 = 0;
                }else if (primchar == "B"){
                    idletra1 = 2;
                }else if (primchar == "C"){
                    idletra1 = 4;
                }else if (primchar == "D"){
                    idletra1 = 6;
                }else if (primchar == "E"){
                    idletra1 = 8;
                }

                secchar = sec[posicao];
                /**std::cout << "primeiro charactere: " << primchar << std::endl;
                std::cout << "segundo charactere: " << secchar << std::endl;**/
                if (secchar == "A"){
                    idletra2 = 0;
                }else if (secchar == "B"){
                    idletra2 = 2;
                }else if (secchar == "C"){
                    idletra2 = 4;
                }else if (secchar == "D"){
                    idletra2 = 6;
                }else if (secchar == "E"){
                    idletra2 = 8;
                }
                /**std::cout << "idletra 1: " << idletra1 << std::endl;
                std::cout << "idletra 2: " << idletra2 << std::endl;
                std::cout << std::endl;**/

                prim = _numeros[indexador];
                sec = _numeros[indexador + 2];
                /**std::cout << "primeira senha: " << prim << std::endl;
                std::cout << "segunda senha: " << sec << std::endl;
                std::cout << std::endl;**/
                for (int i = 0; i < 2; i++){
                    primnum = prim[i + idletra1];
                    for (int j = 0; j < 2; j++){
                        secnum = sec[j + idletra2];
                        /**std::cout << "primeiro algarismo: " << primnum << std::endl;
                        std::cout << "segundo algarismo: " << secnum << std::endl;
                        std::cout << std::endl;**/
                        if ((primnum == secnum)){
                                senhaprov2 += primnum;
                                senhaprov2 += ' ';
                                /**std::cout << "senha provisoria 2: " << senhaprov2 << std::endl;
                                std::cout << std::endl;**/
                        }
                    }
                }
                posicao++;
            }while(posicao < 6);
            posicao = 0;

            /**std::cout << "Criacao da terceira senha" << std::endl;
            std::cout << std::endl;**/
            do{
                prim = _caracteres[indexador + 1];
                sec = _caracteres[indexador + 2];
                /**std::cout << "primeira senha: " << prim << std::endl;
                std::cout << "segunda senha: " << sec << std::endl;
                std::cout << std::endl;**/

                primchar = prim[posicao];
                if (primchar == "A"){
                    idletra1 = 0;
                }else if (primchar == "B"){
                    idletra1 = 2;
                }else if (primchar == "C"){
                    idletra1 = 4;
                }else if (primchar == "D"){
                    idletra1 = 6;
                }else if (primchar == "E"){
                    idletra1 = 8;
                }

                secchar = sec[posicao];
                /**std::cout << "primeiro charactere: " << primchar << std::endl;
                std::cout << "segundo charactere: " << secchar << std::endl;**/
                if (secchar == "A"){
                    idletra2 = 0;
                }else if (secchar == "B"){
                    idletra2 = 2;
                }else if (secchar == "C"){
                    idletra2 = 4;
                }else if (secchar == "D"){
                    idletra2 = 6;
                }else if (secchar == "E"){
                    idletra2 = 8;
                }
                /**std::cout << "idletra 1: " << idletra1 << std::endl;
                std::cout << "idletra 2: " << idletra2 << std::endl;
                std::cout << std::endl;**/

                prim = _numeros[indexador + 1];
                sec = _numeros[indexador + 2];
                /**std::cout << "primeira senha: " << prim << std::endl;
                std::cout << "segunda senha: " << sec << std::endl;
                std::cout << std::endl;**/
                for (int i = 0; i < 2; i++){
                    primnum = prim[i + idletra1];
                    for (int j = 0; j < 2; j++){
                        secnum = sec[j + idletra2];
                        /**std::cout << "primeiro algarismo: " << primnum << std::endl;
                        std::cout << "segundo algarismo: " << secnum << std::endl;
                        std::cout << std::endl;**/
                        if ((primnum == secnum)){
                                senhaprov3 += primnum;
                                senhaprov3 += ' ';
                                /**std::cout << "senha provisoria 2: " << senhaprov2 << std::endl;
                                std::cout << std::endl;**/
                        }
                    }
                }
                posicao++;
            }while(posicao < 6);

            /**std::cout << "Senha prov 1: " << senhaprov1 << std::endl;
            std::cout << "Senha prov 2: " << senhaprov2 << std::endl;
            std::cout << "Senha prov 3: " << senhaprov3 << std::endl;**/
            if (senhaprov1.size() == 12){
                _senhacrackeada = senhaprov1;
            }else if (senhaprov2.size() == 12){
                _senhacrackeada = senhaprov2;
            }else if (senhaprov3.size() == 12){
                _senhacrackeada = senhaprov3;
            }
    }
    
    //std::cout << "fim do passo 3 " << std::endl;
    return _senhacrackeada;
};