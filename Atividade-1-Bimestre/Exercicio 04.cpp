#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL,"");
    float saldo = 1000;
    int escolha;
    float deposito, saque;
    char continuar;
    int contador=0;
    float TotalSacado=0,TotalDepositado=0;
    float MaiorSaque=0,MaiorDeposito=0;

    do
    {
       cout << "\n\n1 - Depósito\n2 - Saque\n3 - Consulta\n4 - Relatório parcial\n0 - Encerrar sistema\n\n";
       cin >> escolha;
    system("cls");

    switch (escolha)
    {
    case 1:
        {
            cout << "Digite o valor do depósito:\n";
            do
            {
            cin >> deposito;

            cout << (deposito <1 ? "Valor incorreto, insira novamente:\n" : "");
            }while(deposito<1);

            if (deposito > MaiorDeposito)
            {
                MaiorDeposito = deposito;
            }

            TotalDepositado += deposito;
            contador++;

            saldo += deposito;
            break;
        }

    case 2:
        {
            cout << "Digite o valor do saque:\n";

            do
            {
                cin >> saque;

                if(saque > saldo)
                {
                    cout << "Saldo insuficiente, insira novamente:\n";
                }

                if (saque > saldo*0.5 && saque < saldo)
                {
                    cout << "Saque de alto valor, deseja continuar? (S/N)\n";
                    cin >> continuar;
                    if (continuar == 'N')
                    {
                        break;
                    }
                }

            }while(saque > saldo);

            if (saque > MaiorSaque)
            {
                MaiorSaque = saque;
            }

            TotalSacado += saque;
            contador++;

            saldo -= saque;
            break;
        }

    case 3:
        {
            cout << "Saldo atual: R$" << saldo << endl;
            break;
        }

    case 4:
        {
            cout << "Total depositado: R$" << TotalDepositado << endl;
            cout << "Total sacado: R$" << TotalSacado << endl;
            cout << "Número de operações realizadas: " << contador << endl;
            cout << "Maior depósito realizado: R$" << MaiorDeposito << endl;
            cout << "Maior saque realizado: R$" << MaiorSaque << endl;
            break;
        }
    }

    }while (escolha != 0);

}
