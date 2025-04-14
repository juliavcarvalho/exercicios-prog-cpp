#include <iostream>
using namespace std;

int main() {
   int valor;
   cout << "Digite um valor: " << endl;
   cin >> valor;

   int resto;
   resto = valor % 2;

   if (resto == 1) // Usar dois ==
   { 
    cout << "O valor é ímpar." << endl;
   } 
   else {
       cout << "O valor é par." << endl;
   }
   return 0;
}
