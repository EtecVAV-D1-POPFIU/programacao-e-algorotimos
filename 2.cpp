#include <iostream>
using namespace std;

double power(int base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << "O resultado de " << base << "^" << exponent << " é: " << result << endl;
    return 0;
}