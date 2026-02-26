#include <iostream>
#include <locale>

#define quantA 20

using namespace std;

int main()
{

    setlocale(LC_ALL,"");

    float turma[quantA],soma=0;

    for(int i=0;i < quantA;i++)
    {
        cout << "Digite a nota do " << i+1 << "º aluno" << endl;
        cin >> turma[i];

        soma += turma[i];
    }

    cout << "A media da nota dos alunos é " << soma/quantA << endl;
    cout << "A contagem foi de " << soma;









}
