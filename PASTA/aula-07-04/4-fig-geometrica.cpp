#include <iostream>
using namespace std;

int main() {
    
    int altura, largura;
    cout << "Digite a altura da figura geométrica: " << endl;
    cin >> altura;
    
    cout << "Digite a largura da figura geométrica: " << endl;
    cin >> largura;
    
    cout << "O valor da área da figura é: " << endl;
    cout << altura * largura << endl;
    
    if (altura == largura)
    cout << "A figura é um quadrado." << endl;
    
    if (altura != largura) 
    cout << "A figura é um retângulo." << endl;
    
    return 0;
}
