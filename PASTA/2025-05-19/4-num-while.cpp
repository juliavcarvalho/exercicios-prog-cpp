#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;
    
    cout << "Digite um número (negativo ou 0 para sair): ";
    cin >> numero;
    
    while (numero > 0 ) {
        soma += numero;
        cout << "Digite um número (negativo ou 0 para sair): ";
        cin >> numero;
    }
    
    cout << "A soma dos números positivos é: " << soma << endl;

    return 0;
}
