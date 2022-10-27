#include <string>
#include <iterator>
#include <map>

class Intruso{

    private:
        std::string senhacompleta;
        std::map<std::string, std::string>;
        std::string senhacrackeada;
        
    /*Continue a implementação da classe Intruso*/

    public:
        void set_senha_vazada(std::string vazou);
        std::string organizador(std::string senhacompleta);
        std::string crack_senha();
};