#include <iostream>
#include <locale>

#define diasAno 365

using namespace std;

int main()
{

    setlocale(LC_ALL,"");

    float tempMaA,tempMeA,tempMediaA,tempMediaD[diasAno],quantIMA,somaMediaD;

    for(int i=0;i < diasAno;i++)
    {
        cout << "Temperatura media do " << i+1 << "° dia" << endl;
        cin >> tempMediaD[i];


    tempMaA = tempMediaD[0];
    tempMeA = tempMediaD[0];
    }

    for(int i=1; i < diasAno;i++)
    {

        if(tempMaA < tempMediaD[i])
        {
            tempMaA=tempMediaD[i];
        }


        if(tempMeA > tempMediaD[i])
        {
            tempMeA=tempMediaD[i];
        }

    }

    for(int i=0 ;i < diasAno;i++)
    {
        somaMediaD += tempMediaD[i];

        tempMediaA = somaMediaD/diasAno;

        if(tempMediaD[i] < tempMediaA)
        {
            quantIMA++;
        }
    }

    cout << "Maior temperatura anual: " << tempMaA << endl;
    cout << "Menor temperatura anual: " << tempMeA << endl;
    cout << "Media temperatura anual: " << tempMediaA << endl;
    cout << "Quantidades de dias com a temperatura inferior a anual: " << quantIMA;







}
