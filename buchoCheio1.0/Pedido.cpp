#include "Pedido.hpp"
#include "Produto.hpp"
#include "Cliente.hpp"
#include <array>
#include <time.h>

using namespace std;

/*
typedef struct tm {
int tm_sec; //representa os segundos de 0 a 59
int tm_min; //representa os minutos de 0 a 59
int tm_hour; //representa as horas de 0 a 24
int tm_mday: //dia do mês de 1 a 31
int tm_mon; //representa os meses do ano de 0 a 11
int tm_year; //representa o ano a partir de 1900
int tm_wday; //dia da semana de 0 (domingo) até 6 (sábado)
int tm_yday; // dia do ano de 1 a 365
int tm_isdst; //indica horário de verão se for diferente de zero
} horaData;
*/
Pedido::Pedido(){ 
}

Pedido::Pedido(Cliente cliente) {
  this-> cliente = cliente;
}


string Pedido::getDataHora(){
    /* 
  struct tm *data_hora_atual;     
  
  //variável do tipo time_t para armazenar o tempo em segundos  
  time_t segundos;
  
  //obtendo o tempo em segundos  
  time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
  data_hora_atual = localtime(&segundos);  
  
  //para acessar os membros de uma struct usando o ponteiro
  //utilizamos o operador -> no nosso caso temos: 
  //data_hora_atual->membro_da_struct
  
  //Acessando dados convertidos para a struct data_hora_atual  
  printf("\nDia..........: %d\n", data_hora_atual->tm_mday);  
  
  //para retornar o mês corretamente devemos adicionar +1 
  //como vemos abaixo
  printf("\nMes..........: %d\n", data_hora_atual->tm_mon+1);
  
  //para retornar o ano corretamente devemos adicionar 1900 
  //como vemos abaixo
  printf("\nAno..........: %d\n\n", data_hora_atual->tm_year+1900);  
  
  printf("\nDia do ano...: %d\n", data_hora_atual->tm_yday);  
  printf("\nDia da semana: %d\n\n", data_hora_atual->tm_wday);
    
   Obtendo os valores da struct data_hora_atual  
    e formatando a saída de dados no formato 
    hora: minuto: segundo
     */
    //return this-> ;
}

/*
void Pedido::setListaProdutos(int quant){
    Produto lista[5];
    string nome;
    double v;

  
    for (int a = 0; a < quant; a++){
        cout << "Digite o nome do produto"<<endl;
          cin >> nome;
        lista[a].setNome(nome);
        cout << "Digite a quantidade que vai levar"<<endl;
          cin >> quantidade;
        lista[a].setQuantidade(quantidade);
        cout << "Digite o valor informado na embalagem do produto" << endl;
          cin >> v;
        lista[a].setValor(v);

      
    }
  }
*/
void Pedido::setCliente(Cliente cliente){
  this-> cliente = cliente;
}


Cliente Pedido::getCliente(){
  return this->cliente;
  
}


void Pedido::toStringPedido() {
  cout << "Data e hora: " << getDataHora() << endl;
  //cout << "Valor total: " << getValorTotal() << endl;
}
