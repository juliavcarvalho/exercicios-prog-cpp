#include <iostream>
using namespace std;

int main() {
    int num = 0;
    char opcao = 's';

    while (opcao == 's' || opcao == 'S') {
        cout << "Digite um numero correspondente a um mês do ano: ";
        cin >> num;
        
        switch (num) {
            case 1:
                cout << "Janeiro" << endl;
                break;
            case 2:
                cout << "Fevereiro" << endl;
                break;
            case 3:
                cout << "Março" << endl;
                break;
            case 4:
                cout << "Abril" << endl;
                break;
            case 5:
                cout << "Maio" << endl;
                break;
            case 6:
                cout << "Junho" << endl;
                break;
            case 7:
                cout << "Julho" << endl;
                break;
            case 8:
                cout << "Agosto" << endl;
                break;
            case 9:
                cout << "Setembro" << endl;
                break;
            case 10:
                cout << "Outubro" << endl;
                break;
            case 11:
                cout << "Novembro" << endl;
                break;
            case 12:
                cout << "Dezembro" << endl;
                break;
            default:
                cout << "O valor digitado não corresponde a um mês." << endl;
        }

        cout << "\nDeseja consultar outro mês? (s para sim / n para não): ";
        cin >> opcao;
        cout << endl;
    }

    cout << "Programa encerrado. Até mais!" << endl;
    return 0;
}
