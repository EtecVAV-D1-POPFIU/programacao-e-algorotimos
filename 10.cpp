#include <iostream>
#include <string>
using namespace std;

int contarVogais(const string& nome) {
    int count = 0;
    for (char c : nome) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int contarConsoantes(const string& nome) {
    int count = 0;
    for (char c : nome) {
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    string nome;
    cout << "Digite seu nome completo: ";
    cin.ignore(); // Para ignorar o newline do cin anterior
    getline(cin, nome);

    int vogais = contarVogais(nome);
    int consoantes = contarConsoantes(nome);

    cout << "Quantidade de vogais: " << vogais << endl;
    cout << "Quantidade de consoantes: " << consoantes << endl;
    return 0;
}