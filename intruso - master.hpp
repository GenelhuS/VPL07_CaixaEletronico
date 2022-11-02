#include <string>
#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <algorithm>

class Intruso{

    private:
        std::vector <std::string> _senhas, _caracteres, _numeros;
        std::multimap <std::string, std::string> _mapa;
        std::string _senhacrackeada;
        int _numsenhas;
        
    /*Continue a implementação da classe Intruso*/

    public:
        Intruso();
        void set_senha_vazada(std::string vazou);
        void formatador(std::string senha);
        std::string crack_senha();
        int get_numsenhas(int numsenha);
};