#include <iostream>

using namespace std;

int main()
{
    float salario;

    cout << "Digite o salario do funcionario\n";
    cin >> salario;

    if (salario < 1000)
    {
        salario = salario + salario*0.15;
    }

    else if (salario >= 1000 && salario <= 1500)
    {
        salario = salario + salario*0.10;
    }

    else
    {
        salario = salario + salario*0.05;
    }

    cout << "Novo valor do salario: R$ " << salario << ",00";
}
