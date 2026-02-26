#include <iostream>
#include <locale>

#define quantN 4
using namespace std;

int main()
{

    setlocale(LC_ALL,"");

    int numero[quantN];

    for(int i=0;i < quantN ;i++)
    {
        cout << "Digite o " << i+1 << "º numero" << endl;
        cin >> numero[i];
    }

    for(int i=quantN-1;i >= 0 ;i--)
    {
        cout << numero[i] << " ";
    }





}
