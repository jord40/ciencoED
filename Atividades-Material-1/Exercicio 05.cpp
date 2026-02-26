#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");

    int quantV;

    cout << "Quantas somas deseja fazer?" << endl;
    cin >> quantV;

    int A[quantV],B[quantV],Soma[quantV];

    for(int i=0;i < quantV;i++)
    {
        cout << "Digite o " << i+1 << "º valor de A" <<endl;
        cin >> A[i];

        cout << "Digite o " << i+1 << "º valor de B" << endl;
        cin >> B[i];

    }

    for(int i=0;i < quantV;i++)
    {
        Soma[i] = A[i] + B[i];

        cout << A[i] << " + " << B[i] << " = " << Soma[i] << endl;
    }
}
