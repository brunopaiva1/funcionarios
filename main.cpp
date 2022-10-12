// Criar uma classe chamada funcionário que contenha como membro dado o nome e o número do 
// funcioná- rio e como funções-membro Lerdados() e verda- dos() que leiam os dados do teclado e
//  os visualizem na tela, respectivamente.
// Escrever um programa que utilize a classe, crian- do um array de tipo funcionário e, 
// em seguida, preen- chendo com dados correspondentes a 50 funcionários. Uma vez preenchido o 
// array, visualizar os dados de todos os funcionários.

#include "Funcionarios.h"
#include <iostream>

int main(){
    int n = 3;    
    Funcionarios objeto[n];

    for(int i = 0; i < n; i++){
        objeto[i].lerDados();
        
    }
    for(int i = 0; i < n; i++){
        objeto[i].verDados();
    }

    return 0;
}