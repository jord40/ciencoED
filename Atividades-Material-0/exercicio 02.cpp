#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int idade;

    cout << "Qual a sua idade?" << endl;
    cin >> idade;

    if (idade >=5 && idade <=7)
    {
        cout << "Infantil A";
    }
    else if (idade >=8 && idade <=10)
    {
        cout << "Infantil B";
    }
    else if (idade >= 11 && idade <= 13)
    {
        cout << "Juvenil A";
    }
    else if (idade >= 14 && idade <= 17)
    {
        cout << "Juvenil B";
    }
    else if (idade > 17)
    {
        cout << "Senior";
    }
    else
    {
        cout << "Não pode nadar";
    }
}
