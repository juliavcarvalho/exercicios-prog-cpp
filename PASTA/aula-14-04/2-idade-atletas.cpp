#include <iostream>
using namespace std;

int main() {
    
    int idade = 0;
    cout << "Olá! Digite a sua idade: ";
    cin >> idade;
    
    if (idade < 10) {
    cout << "Você é da categoria Fraldinha." << endl;
    }
    else if (idade >= 10 && idade <= 14) {
    cout << "Você é da categoria Juvenil." << endl;    
    }
    else if (idade >= 14 && idade <= 18) {
    cout << "Você é da categoria Sub20." << endl;
    }
    else if (idade >= 19) {
    cout << "Você é da categoria Profissional." << endl;
    }
    
    return 0;
}
