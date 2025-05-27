#include <iostream>
using namespace std;

int main() {
    double saldo = 5000; // Saldo inicial
    int opcao;
    double valor;
    char continuar = 's'; // Controle para repetir operações

    cout << "Bem-vindo ao Caixa Eletrônico\n";

    // Loop para realizar operações enquanto o usuário quiser
    while (continuar == 's' || continuar == 'S') {
        // Menu de opções
        cout << "\nSelecione uma opção:\n";
        cout << "1 - Transferência\n";
        cout << "2 - Saque\n";
        cout << "Opção: ";
        cin >> opcao;

        // Escolha da operação
        switch (opcao) {
            case 1:
                cout << "Digite o valor para transferência: R$ ";
                cin >> valor;
                // Verifica se há saldo suficiente
                if (valor <= saldo) {
                    saldo -= valor;
                    cout << "Transferência realizada com sucesso.\n";
                } else {
                    cout << "Saldo insuficiente para essa transferência.\n";
                }
                break;

            case 2:
                cout << "Digite o valor para saque: R$ ";
                cin >> valor;
                // Verifica se há saldo suficiente
                if (valor <= saldo) {
                    saldo -= valor;
                    cout << "Saque realizado com sucesso.\n";
                } else {
                    cout << "Saldo insuficiente para esse saque.\n";
                }
                break;

            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;
        }

        // Mostra o saldo atual
        cout << "\nSaldo atual: R$ " << saldo << endl;
        // Pergunta se o usuário quer continuar
        cout << "Deseja realizar outra operação? (s/n): ";
        cin >> continuar;
    }

    // Mensagem de saída
    cout << "\nObrigado por utilizar nosso caixa eletrônico.\n";
    cout << "Saldo final: R$ " << saldo << endl;

    return 0;
}
