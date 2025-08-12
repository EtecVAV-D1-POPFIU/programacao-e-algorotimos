#include <iostream>
using namespace std;

double pesoIdealMasculino(double altura) {
    return 72.7 * altura - 58;
}

double pesoIdealFeminino(double altura) {
    return 62.1 * altura - 44.7;
}

int main() {
    char sexo;
    double altura;
    cout << "Digite seu sexo (M/F): ";
    cin >> sexo;
    cout << "Digite sua altura em metros: ";
    cin >> altura;

    if (sexo == 'M' || sexo == 'm') {
        cout << "Seu peso ideal é: " << pesoIdealMasculino(altura) << " kg" << endl;
    } else if (sexo == 'F' || sexo == 'f') {
        cout << "Seu peso ideal é: " << pesoIdealFeminino(altura) << " kg" << endl;
    } else {
        cout << "Sexo inválido!" << endl;
    }
    return 0;
}