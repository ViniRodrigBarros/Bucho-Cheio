#include <iostream>
#include <string>
#include "Endereco.hpp"

using namespace std;

Endereco::Endereco() {
}

Endereco::Endereco(string rua, string numResidencia, string bairro, string localRef){
  this->rua = rua;
  this->numResidencia = numResidencia;
  this->bairro = bairro;
  this->localRef = localRef;
}

void Endereco:: setRua(string rua1){
  this->rua=rua1;
}

string Endereco:: getRua(){
return this->rua;
}

void Endereco::  setNumeroResidencia(string num){
  this->numResidencia=num;
}

string  Endereco:: getNumeroResidencia(){
  return this->numResidencia;
}

void Endereco::  setBairro(string bairro ){
  this->bairro=bairro;
}

string Endereco:: getBairro(){
  return this->bairro;
}

void Endereco:: setlocalReferencia(string local){
  this->localRef=local;
}

string Endereco::getLocalReferencia(){
  return this->localRef;
}

void Endereco::toStringEndereco() {
  cout << "Rua: " << rua << endl;
  cout << "Numero da residencia: " << numResidencia << endl;
  cout << "Bairro: " << bairro << endl;
  cout << "Local de referencia: " << localRef << endl;
}