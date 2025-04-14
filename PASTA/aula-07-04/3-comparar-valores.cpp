#include <iostream>
using namespace std;

int main() {
    
    int val1, val2;
    cout << "Olá! Digite o primeiro valor: " << endl;
    cin >> val1;
    
    cout << "Ok! Digite o segundo valor: " << endl;
    cin >> val2;
    
    if (val1 < val2) 
    {
       cout << "O primeiro valor é menor que o segundo." << endl;
    } 
    else if (val1 > val2)
    {
        cout << "O primeiro valor é maior que o segundo." << endl;
    }
    else 
    {
    cout << "Ambos os valores são iguais." << endl;
    }

    return 0;
}
