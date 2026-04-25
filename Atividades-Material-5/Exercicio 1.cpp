#include <iostream>
#include <stack>
#include <stdlib.h>

using namespace std;

int main()
{
    stack <int> num;
    int opcao;
    int valor=0;
    do
    {
    cout << "\n[1] Inserir um elemento na pilha\n" <<
    "[2] Remover o elemento do topo da pilha\n" <<
    "[3] Verificar o elemento do topo da pilha\n" <<
    "[4] Verificar se a pilha está vazia\n" <<
    "[5] Exibir o tamanho da pilha\n" <<
    "[0] Sair\n";

    cin >> opcao;
    system("cls");

    switch(opcao)
    {
    case 1:
        {
            cout << "Digite o valor:\n";
            cin >> valor;
          num.push(valor);
          break;
        }
    case 2:
        {
            num.pop();
            break;
        }
    case 3:
        {
            cout << "Valor no topo a pilha: " << num.top() << endl;
            break;
        }
    case 4:
        {
            cout << "A pilha esta " << (num.empty() ? "vazia" : "cheia") << endl;
            break;
        }
    case 5:
        {
        cout << "Tamanho da pilha: " << num.size() << endl;
        break;
        }
    default:
        {
            if(opcao!=0)
            cout << "Valor incorreto,digite novamente:\n";
        }
    }
    }while(opcao != 0);

}
