#include <iostream>
using namespace std;

int main() {
    
    int idade = 0;
    cout << "Olá! Informe a sua idade: ";
    cin >> idade;
    
    if (idade < 18) {
        cout << "Você é menor de idade." << endl;
    } else if (idade >= 18 && idade <= 60) {
        cout << "Você é adulto." << endl;    
    } else if (idade > 60) {
        cout << "Você é idoso." << endl;
    }
    
    return 0;
}
