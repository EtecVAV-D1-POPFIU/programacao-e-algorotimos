#include <iostream>
#include <string>
using namespace std;

string substituirVogais(const string& palavra) {
    string resultado = palavra;
    for (char& c : resultado) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            c = '*';
        }
    }
    return resultado;
}

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    cout << "Palavra com vogais substituídas: " << substituirVogais(palavra) << endl;
    return 0;
}