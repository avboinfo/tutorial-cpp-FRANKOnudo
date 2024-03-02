#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class mastermind
{
private:
    int numero_mosse;
    std::string ultima_mossa;
    
    static const int  DIM_MOSSA_VALIDA = 4;
    int mossa_valida[DIM_MOSSA_VALIDA];
    int codice_segreto[DIM_MOSSA_VALIDA];

    void genera_codice_segreto()
    {
        srand(time(NULL));
        for (int i = 0; i < DIM_MOSSA_VALIDA; i++)
        {
            codice_segreto[i] = rand()% 10;
        }
    }

    bool sanifica_input ()
    {
        int j = 0;
        for (int i = 0; i < ultima_mossa.size(); i++)
        {
            char c = ultima_mossa[i];
            if(c >= '0' && c <= '9')
                mossa_valida[i] = c - '0';
            else if(c == '-')
                mossa_valida[i] = c - 1;
            else
                return false;
        }    
    }
    
public:
    mastermind(/* args */)
    {
        numero_mosse = 0;
        ultima_mossa = " " ;          
    }

    void nuova_giocata()
    {
        std::cout << numero_mosse + 1 << ": ";
        
        do
        {
            std::getline(std::cin, ultima_mossa);
        }while(!sanifica_input());
        
        numero_mosse++;
    }
    void risultato_mossa()
    {

    }

};