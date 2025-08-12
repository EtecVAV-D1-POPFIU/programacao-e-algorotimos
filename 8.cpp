#include <iostream>
#include <cmath>
using namespace std;

double calcularArea(double raio) {
    return M_PI * raio * raio; // M_PI é uma constante da biblioteca cmath
}

int main() {
    double somaArea = 0;
    double raio;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o raio do círculo " << (i + 1) << ": ";
        cin >> raio;
        somaArea += calcularArea(raio);
    }

    cout << "A soma da área de todos os círculos é: " << somaArea << endl;
    return 0;
}