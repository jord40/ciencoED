#include <iostream>
#include <locale>
#include <string>
#include <stdlib.h>

#define quantA 2

using namespace std;

typedef struct Animal
{
    string nomeA,especieA;
    int iddA;
    float pesoKA;
} ListaAnimais;

int main()
{
    setlocale(LC_ALL,"");

    ListaAnimais dados[quantA];

    for(int i=0; i<quantA;i++)
    {
        cout << "Animal " << i + 1 << "\n";

        cout << "Nome: ";
        getline(cin, dados[i].nomeA);

        cout << "Espécie: ";
        getline(cin, dados[i].especieA);

        cout << "Idade: ";
        cin >> dados[i].iddA;

        cout << "Peso em kilos: ";
        cin >> dados[i].pesoKA;

        cin.ignore();
        system("cls");

    }

    for(int i=0;i<quantA;i++)
    {
        cout << "Animal " << i + 1 << ":\n";
        cout << "Nome: " << dados[i].nomeA << endl;
        cout << "Espécie: " << dados[i].especieA << endl;
        cout << "Idade: " << dados[i].iddA << " anos" << endl;
        cout << "Peso: " << dados[i].pesoKA << " kg" << endl << endl;
    }


}
