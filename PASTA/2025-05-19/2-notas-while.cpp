#include <iostream>
using namespace std;

int main() {
    int nota;
    
    cout << "Digite uma nota de 0 a 10: " << endl;
    cin >> nota;
    
    while (nota < 0 || nota >= 10 ) {
        cout << "Valor inválido. Tente novamente: ";
        cin >> nota;
        }
        
        cout << "Nota aceita!" << endl;

    return 0;
}
