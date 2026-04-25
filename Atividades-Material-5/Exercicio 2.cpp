#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> p;
    int valor;
    int posicao=0;
    do
    {
        cout << "Digite um numero inteiro positivo (digite 0 para finalizar):\n";
        cin >> valor;
        posicao++;
        p.push(valor);
        if(valor == 0)
        {
            p.pop();
        }
    }while(valor != 0);

    cout << "Ordem inversa: ";
    do
    {
    cout << p.top() << " ";
    p.pop();
    posicao--;
    }while(posicao != 0);
}
