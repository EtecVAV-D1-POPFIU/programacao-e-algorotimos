#include <iostream>
using namespace std;

int adicao(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

double divisao(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        cout << "Divisão por zero não é permitida!" << endl;
        return 0;
    }
}

int main() {
    int num1, num2;
    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;

    cout << "Adição: " << adicao(num1, num2) << endl;
    cout << "Subtração: " << subtracao(num1, num2) << endl;
    cout << "Multiplicação: " << multiplicacao(num1, num2) << endl;
    cout << "Divisão: " << divisao(num1, num2) << endl;

    return 0;
}