// Criar uma classe chamada funcionário que contenha como membro dado o nome e o número do 
// funcioná- rio e como funções-membro Lerdados() e verda- dos() que leiam os dados do teclado e
//  os visualizem na tela, respectivamente.
// Escrever um programa que utilize a classe, crian- do um array de tipo funcionário e, 
// em seguida, preen- chendo com dados correspondentes a 50 funcionários. Uma vez preenchido o 
// array, visualizar os dados de todos os funcionários.

#include <iostream>
#include "Funcionarios.h"

using namespace std;

void Funcionarios::lerDados(){
    cout << "Digite o nome do funcionario: " << endl;
    cin >> nome;
    cout << "Digite o numero do funcionario: " <<endl;
    cin >> numero;
}

void Funcionarios::verDados(){
    cout << nome << endl;
    cout << numero << endl;
}
