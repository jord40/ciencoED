#include <iostream>
#include <list>
#include <iterator>
#include <locale>

using namespace std;

void imprimirLista(const list<int>& lista)
{
    list<int>::const_iterator elemento;

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
        cout << endl;
    }
}


int main()
{
    setlocale(LC_ALL,"");
    list<int> numeros;
    int nums;
    for (int i=0;i<5;i++)
    {
        cout << "Digite o " << i+1 << "º número:\n";
        cin >> nums;
        numeros.push_back(nums);
    }

    imprimirLista(numeros);

    numeros.reverse();

    imprimirLista(numeros);
}
