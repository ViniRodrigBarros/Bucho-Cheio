#ifndef Pedido_hpp_included
#define Pedido_hpp_included
#include <iostream>
#include <string.h>
#include "Cliente.hpp"
#include "Produto.hpp"


using namespace std;

class Pedido{
  private:
  
    Cliente cliente;
    double valorTotal = 0;
    string dataHora;
    
  public:
    Pedido();
    Pedido(Cliente cliente);
    string getDataHora();
    void setListaProdutos();
    Produto getListaProdutos();
    void setCliente(Cliente cliente);
    Cliente getCliente();
    void toStringPedido();
};
#endif