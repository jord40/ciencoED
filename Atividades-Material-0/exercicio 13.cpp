#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float nota;
    cout << "Informe a nota" << endl;
    cin >> nota;

    if (nota>=6)
    {
        cout << "Aprovado";
    }

    else if(nota>=4)
    {
        cout << "Recuperação";
    }

    else if (nota <4)
    {
        cout << "Reprovado";
    }
}
