#include <iostream>
using namespace std;

int main() {
    
    double peso = 0;
    cout << "Olá! Vamos calcular o seu IMC. Digite o seu peso: ";
    cin >> peso;
    
    double altura = 0;
    cout << "Agora, digite a sua altura: ";
    cin >> altura;
    
    double imc = peso / (altura * altura);
    
    cout << "Seu IMC é: " << imc << endl;
    
    if (imc < 18.5) {
        cout << "Você está no nível Magreza." << endl;
    } else if (imc >= 18.5 && imc <= 24.9) {
        cout << "Você está no nível Normal." << endl;    
    } else if (imc >= 25.0 && imc <= 29.9) {
        cout << "Você está no nível Sobrepeso." << endl;
    } else if (imc >= 30.0 && imc <= 39.9) {
        cout << "Você está no nível Obesidade." << endl;
    } else if (imc >= 40.0) {
        cout << "Você está no nível Obesidade Grave." << endl;    
    }
    
    return 0;
}
