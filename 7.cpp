#include <iostream>
#include <vector>
using namespace std;

string verificarOrdem(const vector<int>& numeros) {
    bool crescente = true;
    bool decrescente = true;

    for (size_t i = 1; i < numeros.size(); i++) {
        if (numeros[i] < numeros[i - 1]) {
            crescente = false;
        }
        if (numeros[i] > numeros[i - 1]) {
            decrescente = false;
        }
    }

    if (crescente) return "Ordem Crescente";
    if (decrescente) return "Ordem Decrescente";
    return "Não Ordenado";
}

int main() {
    vector<int> numeros(5);
    cout << "Digite 5 números: ";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    cout << "A ordem dos números é: " << verificarOrdem(numeros) << endl;
    return 0;
}