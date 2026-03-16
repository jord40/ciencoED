#include <iostream>
#include <locale>
#include <string>

using namespace std;

typedef struct Endereco
{
    string rua,cidade,cep;
} TipoEndereco;

int main()
{
    setlocale(LC_ALL,"");

    TipoEndereco endereco;

    cout << "Digite o nome da rua: ";
    getline(cin, endereco.rua);

    cout << "Digite o nome da cidade: ";
    getline(cin, endereco.cidade);

    cout << "Digite o CEP: ";
    getline(cin, endereco.cep);

    cout << "\nInformações do Endereço:\n";
    cout << "Rua: " << endereco.rua << endl;
    cout << "Cidade: " << endereco.cidade << endl;
    cout << "CEP: " << endereco.cep << endl;

}
