#include <iostream>
#include <locale>
#include <stdlib.h>


using namespace std;

struct Funcionario
{
    int id,idade,tempoEmpresa;
    string nome;
    float salario;
};

int main()
{
    int TAM;

    cout << "Informe quantos funcionarios quer cadastrar:\n";
    cin >> TAM;

    float porcentagem[TAM];

    Funcionario funcionario[TAM];
    system("cls");
    for (int i=0;i<TAM;i++)
    {
        cout << "Informe o ID do funcionario:\n";
        cin >> funcionario[i].id;
        cin.ignore();
        cout << "Informe o nome do funcionario:\n";
        getline(cin,funcionario[i].nome);

        cout << "Informe o salario do funcionario:\n";
        cin >> funcionario[i].salario;

        cout << "Informe a idade do funcionario:\n";
        cin >> funcionario[i].idade;

        cout << "Informe o tempo de empresa (em anos) do funcionario:\n";
        cin >> funcionario[i].tempoEmpresa;
    }

    system("cls");
    int mediaSalarial = 0,quantMedia=0;
    int MaiorSalario = funcionario[0].salario;
    int MenorSalario = funcionario[0].salario;
    int iddM50=0, M10A=0;

    for(int i=0;i<TAM;i++)
    {
        mediaSalarial += funcionario[i].salario;

        if(funcionario[i].salario > MaiorSalario)
        {
            MaiorSalario = funcionario[i].salario;
        }

        if (funcionario[i].salario < MenorSalario)
        {
            MenorSalario = funcionario[i].salario;
        }

        if (funcionario[i].salario > mediaSalarial/TAM)
        {
            quantMedia++;
        }

        if (funcionario[i].idade > 50)
        {
            iddM50++;
        }

        if (funcionario[i].tempoEmpresa > 10)
        {
            M10A++;
        }
    }

    cout << "Media salarial da empresa: " << mediaSalarial/TAM << endl;
    cout << "Maior salario da empresa: " << MaiorSalario << endl;
    cout << "Menor salario da empresa: " << MenorSalario << endl;
    cout << "Quantidade de funcionarios com salario acima da media: " << quantMedia << endl;
    cout << "Quantidade de funcionarios com idade acima de 50: " << iddM50 << endl;
    cout << "Quantidade de funcionarios com mais de 10 anos de empresa: " << M10A << endl;
    cout << endl;

        for(int i=0;i<TAM;i++)
    {
        if(funcionario[i].tempoEmpresa < 3)
        {
            porcentagem[i] = 0.05;
        }

        else if(funcionario[i].tempoEmpresa <= 10)
        {
            porcentagem[i] = 0.1;
        }

        else
        {
            porcentagem[i] = 0.2;
        }

        if (funcionario[i].idade > 50)
        {
            porcentagem[i] += 0.05;
        }

        if (funcionario[i].salario < mediaSalarial/TAM)
        {
            porcentagem[i] += 0.05;
        }

        funcionario[i].salario += funcionario[i].salario*porcentagem[i];
    }
    mediaSalarial=0;
    quantMedia=0;
    iddM50=0;
    M10A=0;
    MenorSalario=0;
    MaiorSalario=0;

    for(int i=0;i<TAM;i++)
    {
        mediaSalarial += funcionario[i].salario;

        if(funcionario[i].salario > MaiorSalario)
        {
            MaiorSalario = funcionario[i].salario;
        }

        if (funcionario[i].salario < MenorSalario)
        {
            MenorSalario = funcionario[i].salario;
        }

        if (funcionario[i].salario > mediaSalarial/TAM)
        {
            quantMedia++;
        }

        if (funcionario[i].idade > 50)
        {
            iddM50++;
        }

        if (funcionario[i].tempoEmpresa > 10)
        {
            M10A++;
        }
    }

    cout << "Media salarial da empresa: " << mediaSalarial/TAM << endl;
    cout << "Maior salario da empresa: " << MaiorSalario << endl;
    cout << "Menor salario da empresa: " << MenorSalario << endl;
    cout << "Quantidade de funcionarios com salario acima da media: " << quantMedia << endl;
    cout << "Quantidade de funcionarios com idade acima de 50: " << iddM50 << endl;
    cout << "Quantidade de funcionarios com mais de 10 anos de empresa: " << M10A << endl;
    cout << endl;

}
