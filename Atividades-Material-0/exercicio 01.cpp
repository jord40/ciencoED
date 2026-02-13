#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    float peso,altura,imc;

    cout << "Digite seu peso em kg\n";
    cin >> peso;

    cout << "Digite sua altura em cm\n";
    cin >> altura;

    imc= (peso/pow(altura/100,2));

    cout << "Seu IMC é de: " << imc << endl;


    if (imc < 20)
    {
        cout << "Você esta abaixo do peso";
    }
    else if (imc >= 25)
    {
        cout << "Você esta acima do peso";
    }
    else
    {
        cout << "Você esta com o peso ideal";
    }



}
