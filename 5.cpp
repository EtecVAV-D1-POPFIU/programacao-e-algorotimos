#include <iostream>
#include <string>
using namespace std;

bool isPalindromo(const string& palavra) {
    int n = palavra.length();
    for (int i = 0; i < n / 2; i++) {
        if (palavra[i] != palavra[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    if (isPalindromo(palavra)) {
        cout << "A palavra é um palíndromo." << endl;
    } else {
        cout << "A palavra não é um palíndromo." << endl;
    }
    return 0;
}