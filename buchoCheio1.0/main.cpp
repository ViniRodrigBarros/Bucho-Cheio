#include <iostream>
#include <iomanip>
#include <string.h>
#include <tuple>

#include "Cliente.hpp"
#include "Pedido.hpp"
#include "Endereco.hpp"
#include "Produto.hpp"

using namespace std;


// Cardapio
typedef struct Card{
  string cardapio[6] = {"Coxinha", "Pastel", "Empada", "Coca-cola", "Guarana"};
  double valor[6] = {1.50, 1.50, 0.50, 2.0, 2.0};
}Card;


//imprimir o cardapio / imprimir o que ele selecionou
int cardapio(Card card, int ver, Produto produtos, int x = 0){
  
  // cardapio
  if (ver == 0){
    cout << "\n\nCardapio:" << endl;
    for (int i = 0; i < 5; i++){
    cout << i+1 << "- " << card.cardapio[i] << " - R$: " << fixed << setprecision(2) << card.valor[i] << endl; 
    }
    cout << "\n\n";
  }
    
  // imprimir o que selecionou
  else{
    int lista = produtos.getQuantidade();
    if (lista > 0){
      cout << x+1 << "- " << card.cardapio[x] << " - Quantidade: " << lista << " - R$: " << produtos.CalcTprod() << endl;}
    }
  
  // retornando um inteiro que é a qntd pra cada produto e sendo armazenado na variavel lista(linha 114/144)
  return produtos.getQuantidade();
}


// Função para cadastrar
tuple<string, string, string, string, string, string> cadastro(string nome, string celular, string rua, string numCasa, string bairro, string localRef){
  
  cout << "||Cadastro de usuario||" << endl;

  cout << "  Digite seu nome: ";
  cin >> nome;
  
  cout << "\n  Digite o número do seu celular: ";
  cin >> celular;
  
  cout << "\n  Digite sua rua: ";
  cin >> rua;
  
  cout << "\n  Digite o número da sua residência: ";
  cin >> numCasa;
  
  cout << "\n  Digite o seu bairro: ";
  cin >> bairro;
  
  cout << "\n  Digite um local de referência: ";
  cin >> localRef;
  return {nome, celular, rua, numCasa, bairro, localRef};
}



int main() {
  // Variáveis da classe endereço:
  string rua, numCasa, bairro, localRef;
  
  // Variáveis da classe cliente:
  string nome, celular;

  //Struct cardapio
  Card card;

  
  // função para o Cadastro
  tie(nome, celular, rua, numCasa, bairro, localRef) =    cadastro(nome, celular,rua, numCasa, bairro, localRef);
  
  
  // Endereço [1]
  Endereco endereco = Endereco(rua, numCasa, bairro,   localRef);
  
  // Cliente [1]
  Cliente cliente = Cliente(nome, endereco, celular);

  
  // Produtos [5]
  Produto pro =  Produto(card.cardapio[0], 0, card.valor[0]);
  Produto pro1 = Produto(card.cardapio[1], 0, card.valor[1]);
  Produto pro2 = Produto(card.cardapio[2], 0, card.valor[2]);
  Produto pro3 = Produto(card.cardapio[3], 0, card.valor[3]);
  Produto pro4 = Produto(card.cardapio[4], 0, card.valor[4]);
  // lista pra chamar os produtos
  Produto produtos[6] = {pro, pro1, pro2, pro3, pro4};
  
  
  // Pedido [1]
  
  
  
    
    
  //-----------------INTERFACE---------------
  int alt, escolha, qntd;
  double valorTotal;
  // lista com a quantidade de cada produto - começam com 0
  int lista[6] = {0};
  do{
    cout << "\n\n[1]: Escolher Produto:" << endl;
    cout << "[2]: Cancelar Produto: " << endl;
    cout << "[3]: Finalizar Pedido: " << endl;
    cout << "[4]: Visualizar a Conta: " << endl;
    cout << "[5]: Sair do programa:\n" << endl;
    cout << "Opção: ";
    cin >> alt;
  
    switch(alt){
      case 1:
        cardapio(card, 0, produtos[0]);  
        cout << "Escolha o numero do item que você deseja: " << endl;
        cin >> escolha;
        escolha--;
        cout << "Quantidade: " << endl;
        cin >> qntd;
  
        // adcionar produto (parametros: qntd, 0 - significa adcionar / 1 - significa tirar)
        produtos[escolha].modificaProduto(qntd , 0);
        break;
  
      
      case 2:
        if (valorTotal == 0){
          cout << "Não existe produtos para cancelar!" << endl;
        break;}
  
        for (int x = 0; x < 5; x++){
          lista[x] = cardapio(card, 1, produtos[x], x); 
        }
  
        
        cout << "\nEscolha o numero do item que você deseja retirar: " << endl;
        cin >> escolha;
        escolha--;
  
        //Cancelar Produto se tiver algo pra ser cancelado
        if (lista[escolha] > 0){
          produtos[escolha].modificaProduto(qntd , 1);}
        else{
          cout << "\nProduto não está no carrinho!" << endl;
        }
        
        break;
      
      
      case 3:
  
        
      case 4:
        valorTotal = 0;
        for (int i = 0; i < 5;  i++){
          valorTotal += produtos[i].CalcTprod();
          cardapio(card, 1, produtos[i], i); 
          }
        
        cout << "Valor da conta: " << valorTotal << endl;
        
        break;
  
      
      case 5:
        cout << "Finalizando Programa..." << endl;
        return 0;
      
      default:
        cout << "Opção Invalida:" << endl;
        break;
        
      }
    }while(1);
}