#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;
    
    cout << "Informe o valor do primeiro lado do triângulo: ";
    cin >> lado1;
    cout << "Informe o valor do segundo lado: ";
    cin >> lado2;
    cout << "Informe o valor do terceiro lado: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "É um triângulo equilátero." << endl;
    } 
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "É um triângulo isósceles." << endl;
    } 
    else {
        cout << "É um triângulo escaleno." << endl;
    }

    return 0;
}
