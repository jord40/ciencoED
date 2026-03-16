#include <iostream>
#include <locale>
#include <string>

using namespace std;

enum Cores
{
    VERMELHO,VERDE,AZUL
};

typedef Cores TipoCor;

int main()
{
    setlocale(LC_ALL,"");

    TipoCor corEscolhida;

    int escolha;

    cout << "Escolha uma cor (0 para vermelho, 1 para verde, 2 para azul): ";
    cin >> escolha;

     if (escolha == 0) {
        corEscolhida = VERMELHO;
    } else if (escolha == 1) {
        corEscolhida = VERDE;
    } else if (escolha == 2) {
        corEscolhida = AZUL;
    } else {
        cout << "Escolha inválida!" << endl;
        return 1;
    }

    cout << "Cor escolhida: ";
    switch (corEscolhida) {
        case VERMELHO: cout << "Vermelho"; break;
        case VERDE: cout << "Verde"; break;
        case AZUL: cout << "Azul"; break;
    }
    cout << endl;


}
