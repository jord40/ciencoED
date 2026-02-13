#include <iostream>

using namespace std;

int main()
{
    char escolha;



    cout << "Escolha entre A,B ou C e digite SAIR para sair\n";

do
{
    cin >> escolha;

    switch (escolha)
    {
    case 'A':
        {
        cout << "Escolheu opcao A\n";
        break;
        }
    case 'B':
        {
        cout << "Escolheu opcao B\n";
        break;
        }
    case 'C':
        {
        cout << "Escolheu opcao C\n";
        break;
        }
    }

}while(escolha == 'SAIR');
}
