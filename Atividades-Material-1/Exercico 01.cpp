#include <iostream>
#include <locale>

#define quantP 10
using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    string nome[quantP],encontrar;
    int achar=0;

    for(int i=0;i <quantP;i++)
    {
        cout << "Digite o " << i+1 << "º pessoa" << endl;
        cin >> nome[i];

    }

    cout << "Digite o nome da pessoa que quer encontrar" << endl;
    cin >> encontrar;

    for(int i=0;i <quantP;i++)
    {


        if(encontrar == nome[i])
        {
            achar++;
        }

    }

    if(achar >0)
    {
        cout << "\nAchei" << endl;
    }

    else
    {
        cout << "\nNão achei" << endl;
    }
}
