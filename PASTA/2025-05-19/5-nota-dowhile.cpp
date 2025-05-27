#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int nota = 0, soma = 0;
    double media = 0;
    char n = 0;
    
    do {
        i++;
        cout << "Digite uma nota: " << endl;
        cin >> nota;
        soma += nota;
        
        cout << "Deseja digitar uma nova nota?" << endl;
        cin >> n;
        
    } while (n == 's');
    media = soma / i;
    cout << "Sua média é: " << media << endl;

    return 0;
}
