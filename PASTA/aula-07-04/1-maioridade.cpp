#include <iostream>
using namespace std;

int main() {
    
    int idade;
    cout << "Olá. Qual a sua idade?" << endl;
    cin >> idade;
    
    if (idade < 18) {
    cout << ("Você ainda é menor de idade.") << endl;
    }
    else {
    cout << ("Você já é maior de idade.") << endl;
    }

    return 0;
}
