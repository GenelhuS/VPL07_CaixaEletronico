#include <string>
#include <iostream>
#include <iterator>
#include <vector>
#include <map>

class Intruso{

    private:
        std::vector <std::string> _senhas;
        std::multimap <std::string, std::string> _mapa;
        std::string _senhacrackeada;
        
    /*Continue a implementação da classe Intruso*/

    public:
        Intruso();
        void set_senha_vazada(std::string vazou);
        std::string organizador(std::string senha);
        std::string crack_senha();
        std::string get_senha(int numsenha);
};