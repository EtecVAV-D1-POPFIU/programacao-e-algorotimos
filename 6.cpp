#include <iostream>
using namespace std;

string diaDaSemana(int dia) {
    switch (dia) {
        case 1: return "Domingo";
        case 2: return "Segunda-feira";
        case 3: return "Terça-feira";
        case 4: return "Quarta-feira";
        case 5: return "Quinta-feira";
        case 6: return "Sexta-feira";
        case 7: return "Sábado";
        default: return "Número inválido!";
    }
}

int main() {
    int dia;
    cout << "Digite um número de 1 a 7: ";
    cin >> dia;

    cout << "O dia da semana correspondente é: " << diaDaSemana(dia) << endl;
    return 0;
}