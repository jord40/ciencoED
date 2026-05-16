#include <iostream>
#include <list>
#include <iterator>
#include <locale>

using namespace std;

void imprimirLista(const list<string>& lista)
{
    list<string>::const_iterator elemento;

    if(lista.empty())
    {
        cout << "Lista vazia\n";
    }

    else
    {
        elemento = lista.begin();
        do
        {
            cout << *elemento << " ";
            elemento++;
        } while(elemento != lista.end());
        cout << endl << endl;
    }
}


int main()
{
    setlocale(LC_ALL,"");
    list<string> funcionario;
    string funca;
    for (int i=0;i<5;i++)
    {
        cout << "Digite o " << i+1 << "º funcionário:\n";
        getline(cin, funca);
        funcionario.push_back(funca);
    }

    imprimirLista(funcionario);

    funcionario.sort();

    imprimirLista(funcionario);

    funcionario.reverse();

    imprimirLista(funcionario);

    cout << funcionario.size() << " funcionários cadastrados.";
}
