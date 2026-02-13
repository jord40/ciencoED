#include <iostream>

using namespace std;

int main()
{
    int num,soma=0;

    cout << "Digite os valores para somar e 0 para parar:\n";

    do
    {
        cin >> num;

        if (num <0)
        {
            num =0;
        }

    soma += num;

    }while(num !=0);

    cout << "Valor da soma é: " << soma;


}
