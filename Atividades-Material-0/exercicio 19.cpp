#include <iostream>

using namespace std;

int main()
{
    float nota,soma,qnota;

    cout << "Digite o valor da nota:\n";

    do
    {
        cin >> nota;

        if( nota>0)
        {
        soma += nota;
        }

        if( nota>0)
        {
        qnota++;
        }

    }while(nota>0);

    cout << "A media das notas é: " << soma/qnota;
}
