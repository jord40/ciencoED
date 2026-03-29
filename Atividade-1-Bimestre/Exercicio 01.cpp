#include <iostream>
#include <locale>
using namespace std;

struct Cliente
{
    int idade;
    char doencas,fumante;
    float rendaM;
};

int main()
{
    setlocale(LC_ALL,"");

    Cliente cliente;

    float PlanoSaude;

    cout << "Digite a idade do cliente:\n";
    cin >> cliente.idade;

    cout << "O cliente possui doenças pré-existentes? (S/N)\n";
    cin >> cliente.doencas;

    cout << "O cliente é fumante? (S/N)\n";
    cin >> cliente.fumante;

    cout << "Digite a renda mensal do cliente:\n";
    cin >> cliente.rendaM;

    if (cliente.idade <=18)
    {
        PlanoSaude = 100;
    }
    else if (cliente.idade >= 19 && cliente.idade <= 40)
    {
        PlanoSaude = 180;
    }
    else if (cliente.idade >= 41 && cliente.idade<= 60)
    {
        PlanoSaude = 300;
    }
    else
    {
        PlanoSaude = 500;
    }

    if (cliente.doencas == 'S' && cliente.idade <=40)
    {
        PlanoSaude += (PlanoSaude * 0.3);
    }

    else if (cliente.doencas == 'S' && cliente.idade >40)
    {
        PlanoSaude += (PlanoSaude * 0.5);
    }

    if (cliente.fumante == 'S' && cliente.idade <=50)
    {
        PlanoSaude += (PlanoSaude * 0.2);
    }

    else if (cliente.fumante == 'S' && cliente.idade >50)
    {
        PlanoSaude += (PlanoSaude * 0.4);
    }

    if (cliente.rendaM <2000)
    {
        PlanoSaude -= (PlanoSaude * 0.2);
    }

    else if (cliente.rendaM >= 2000 && cliente.rendaM <= 5000)
    {
        PlanoSaude -= (PlanoSaude * 0.1);
    }

    cout << "Plano de Saúde: R$" << PlanoSaude;



}
