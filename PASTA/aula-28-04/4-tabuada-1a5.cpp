#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) { // i representa o n° da tabuada
    cout << "Tabuada do " << i << endl;
    
    for(int m = 1; m <= 10; m++) { // m representa o multiplicador
    cout << i << " x " << m << " = " << i * m << endl;
    }
    
    cout << endl; // linha para separar
    }

    return 0;
}
