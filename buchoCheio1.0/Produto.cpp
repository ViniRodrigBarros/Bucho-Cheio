#include "Produto.hpp"
#include <string.h>
using namespace std;


Produto::Produto() { 
}

Produto::Produto(string nome, int quantidade, double valor){
  this-> quantidade = quantidade;
  this-> nome = nome;
  this-> valor = valor;
}

void Produto:: setNome(string nome1){
  this-> nome = nome1;
}

string Produto:: getNome(){
  return this-> nome;
}

double Produto:: getValor(){
  return this-> valor;
}

int Produto:: getQuantidade(){
  return this-> quantidade;
}

double Produto:: CalcTprod(){
  double valorTotal;
  valorTotal = getValor() * getQuantidade();
  return valorTotal;
}

void Produto:: modificaProduto(int qntd, int tirar){
  if (tirar == 0){   
    this->quantidade += qntd;
    }
  else{
    this->quantidade -= 1;
  }
}


void Produto::toStringProduto(){
  cout << "Quantidade: " << getQuantidade() << endl;
  cout << "Nome: " << getNome() << endl;
}

