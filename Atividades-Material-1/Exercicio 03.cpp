#include <iostream>
#include <locale>

#define quant 10

using namespace std;

int main()
{

    setlocale(LC_ALL,"");

    int A[quant],X,M[quant];

    for(int i=0;i < quant;i++)
    {
        cout << "Digite o " << i+1 << "º valor" << endl;
        cin >> A[i];


    }

    cout << "Digite o valor para multiplicar" << endl;
    cin >> X;

    cout << "\nResultado da multiplicação" << endl;

    for(int i=0;i < quant;i++)
    {
        M[i] = A[i] * X;

     cout << A[i] << " * " << X << " = " << M[i] << endl;
    }
}
