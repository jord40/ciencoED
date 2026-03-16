#include <iostream>
#include <locale>
using namespace std;

struct variaveis
{
    string nome,sintoma;
    int idade;
    char continuar;
};

int main()
{
    setlocale(LC_ALL,"");

    variaveis pacientes;

int i=0;
    cout << "Insira as irformações dos pacientes" << endl;
    do
    {
     i++;

        cout << "Digite o nome do " << i << "º paciente:" << endl;
        getline(cin,pacientes.nome);

        cout << "Digite a idade:" << endl;
        cin >> pacientes.idade;
          cin.ignore();

        cout << "Digite os sintomas" << endl;
        getline(cin,pacientes.sintoma);

        cout << "Deseja continuar? S/N" << endl;
        cin >> pacientes.continuar;
    cin.ignore();
    } while(toupper(pacientes.continuar)=='S');



}
