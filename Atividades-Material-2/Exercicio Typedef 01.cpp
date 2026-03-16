#include <iostream>
#include <locale>
#include <string>

#define quant 5
using namespace std;

typedef struct dados
{
    string nome,endereco;
    int cpf,idd;

} pessoa;

int main()
{
    setlocale(LC_ALL,"");
    pessoa dado[quant];

    for(int i=0;i<quant;i++)
    {
        cout << "Digite o nome da " << i+1 << "ª pessoa:\n";
        getline(cin,dado[i].nome);

        cout << "Digite o endereço da " << i+1 << "ª pessoa:\n";
        getline(cin,dado[i].endereco);

        cout << "Digite o cpf da " << i+1 << "ª pessoa:\n";
        cin >> dado[i].cpf;

        cout << "Digite a idade da " << i+1 << "ª pessoa:\n";
        cin >> dado[i].idd;

        cin.ignore();
    }

    for(int i=0;i<quant;i++)
    {
        cout << "Nome da " << i+1 << "ª pessoa: " << dado[i].nome
        << "\nEndereço da " << i+1 << "ª pessoa: " << dado[i].endereco
        << "\nCpf da " << i+1 << "ª pessoa: " << dado[i].cpf
        << "\nIdade da " << i+1 << "ª pessoa: " << dado[i].idd << endl << endl;
    }

}
