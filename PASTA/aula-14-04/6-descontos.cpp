#include <iostream>
using namespace std;

int main() {
   double valorCompra, desconto, valorFinal;

   cout << "Digite o valor total da compra: ";
   cin >> valorCompra;

if (valorCompra > 500) {
   desconto = valorCompra * 20 / 100;
} else if (valorCompra >= 300 && valorCompra <= 500) {
   desconto = valorCompra * 15 / 100;
} else if (valorCompra >= 100 && valorCompra < 300) {
   desconto = valorCompra * 10 / 100;
} else {
   desconto = 0;
}

valorFinal = valorCompra - desconto;

   cout << "Valor da compra: R$ " << valorCompra << endl;
   cout << "Desconto aplicado: R$ " << desconto << endl;
   cout << "Valor final a pagar: R$ " << valorFinal << endl;

return 0;
}
