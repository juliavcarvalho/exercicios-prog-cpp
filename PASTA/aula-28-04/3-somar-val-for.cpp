#include <iostream>
using namespace std;

int main() {
    int quantidade, numero, soma = 0;
    
    cout << "Quantos números você quer somar? ";
    cin >> quantidade;
    
    for(int i = 1; i <= quantidade; i++) {
    cout << "Digite o " << i << "° número: ";
    cin >> numero;
    soma += numero; // isso eh a mesma coisa que soma = soma + numero
    }
    
    cout << "A soma dos números digitados é: " << soma << endl;

    return 0;
} 
