#include "Cliente.hpp"


Cliente::Cliente() {
  this-> endereco = Endereco();
}

Cliente::Cliente(string nome, Endereco endereco, string numeroCelular) {
  this-> nome = nome;
  this-> endereco = endereco;
  this-> numeroCelular = numeroCelular;
}

void Cliente:: setNome(string nome){
  this->nome = nome;
}

string Cliente::getNome() {
  return nome;
}

void Cliente::setEndereco(Endereco endereco) {
  this->endereco = endereco;
}


Endereco Cliente::getEndereco() {
  return endereco;
}

void Cliente::setNumeroCelular(string numeroCelular) {
  this->numeroCelular = numeroCelular;
}

string Cliente::getNumeroCelular() {
  return numeroCelular;
}


void Cliente::toStringCliente(){
  cout << "Nome: " << getNome() << endl;
  cout << "Numero do celular: " << getNumeroCelular() << endl;
  this->endereco.toStringEndereco();
}