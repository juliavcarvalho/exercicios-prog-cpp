#include <iostream>
using namespace std;

int main() {
    cout << "Por favor, digite a sua senha: ";
    int senha = 0;
    cin >> senha;
    
    if (senha == 1234) {
    cout << "Senha correta." << endl;
    } else {
    cout << "Senha incorreta! Tente novamente." << endl;    
    }
    
    return 0;
}
