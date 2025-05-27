#include <iostream>
using namespace std;

int main() {
    float nota;
    
    cout << "Digite uma nota de 0 a 10: " << endl;
    cin >> nota;
    
    while (nota < 0 || nota >= 10 ) {
        cout << "Valor inválido. Tente novamente. " << endl;
        
        cout << "Digite novamente: " << endl;
        cin >> nota;
        }
        
        cout << "Valor válido digitado: " << nota << endl;

    return 0;
}
