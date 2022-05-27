#ifndef Cliente_hpp_included
#define Cliente_hpp_included
#include <iostream>
#include "Endereco.hpp"

using namespace std;

class Cliente {
  private:
    string nome;
    string numeroCelular;
    Endereco endereco;
  public:
    
    Cliente();
    Cliente(string nome, Endereco endereco, string numeroCelular);
    void setNome(string nome);
    string getNome();
    void setEndereco(Endereco endereco);
    Endereco getEndereco();
    void setNumeroCelular(string numerocelular);
    string getNumeroCelular();
    void toStringCliente();
};
#endif