#include <iostream>
#include <locale>

using namespace std;
int main()
{
setlocale(LC_ALL,"");

int numero[10],altura[10],maior,menor, numeroMa,numeroMe;


    for (int i=0;i <10;i++)
    {

    cout << "Digite o numero do " << i+1 << "° aluno\n";
    cin >> numero[i];
    cout << "Digite a altura em cm do " << i+1 << "° aluno\n";
    cin >> altura[i];

    maior = altura[0];
    menor = altura[0];
    numeroMa = numero[0];
    numeroMe = numero[0];

    }

    for (int i=1;i <10;i++)
    {
        if (altura[i] > maior)
    {
        maior = altura[i];
        numeroMa = numero[i];
    }
    if (altura[i] < menor)
    {
        menor = altura[i];
        numeroMe = numero[i];
    }
    }

    cout << "O aluno de numero " << numeroMa << " tem a maior altura de " << maior << "cm" << endl;
    cout << "O aluno de numero " << numeroMe << " tem a menor altura de " << menor << "cm" << endl;
}
