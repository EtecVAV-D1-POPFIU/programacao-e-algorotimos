#include <iostream>
using namespace std;

bool isOdd(int num) {
    return num % 2 != 0;
}

int main() {
    int n, sum = 0;
    cout << "Digite um número inteiro: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isOdd(i)) {
            sum += i;
        }
    }

    cout << "A soma dos números ímpares até " << n << " é: " << sum << endl;
    return 0;
}