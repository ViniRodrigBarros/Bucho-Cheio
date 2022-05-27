#ifndef Produto_hpp_included
#define Produto_hpp_included
#include <iostream>
#include <string.h>

using namespace std;

class Produto{
  private:
    int quantidade;
    string nome;
    double valor;

  public:
    Produto();
    Produto(string nome, int quantidade, double valor);
    void setNome(string nome1);
    string getNome();
    double getValor();
    int getQuantidade();
    double CalcTprod();
    void toStringProduto();
    void modificaProduto(int qntd, int tirar);
    
};
#endif