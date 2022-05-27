#ifndef Endereco_hpp_included
#define Endereco_hpp_included
#include <iostream>
#include <string.h>

using namespace std;

class Endereco{

  private:
      string rua;
      string numResidencia;
      string bairro;
      string localRef;
      
  public:
    Endereco();
    Endereco(string rua, string numResidencia, string bairro, string localRef);
    void setRua(string rua1);
    string getRua();
    void setNumeroResidencia(string num);
    string getNumeroResidencia();
    void setBairro(string bairro );
    string getBairro();
    void setlocalReferencia(string local);
    string getLocalReferencia();
    void toStringEndereco();


};
#endif