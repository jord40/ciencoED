#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    string condicao;
    float precoP;
    int vezes;

    cout << "Preço do produto\n";
    cin >> precoP;

    cout << "Vai pagar com dinheiro, cheque ou credito?\n";
    cin >> condicao;

    if (condicao == "credito")
    {
        cout << "Quantas vezes o cliente fara\n";
        cin >> vezes;
    }

    if (condicao == "dinheiro" || condicao == "cheque")
    {
        precoP = precoP - precoP*0.1;
    }

    else if (condicao == "credito" && vezes == 1)
    {
        precoP = precoP - precoP*0.05;
    }

    else if (condicao == "credito" && vezes == 3)
    {
        precoP = precoP + precoP*0.1;
    }

    cout << "O cliente pagara: R$ " << precoP;


}
