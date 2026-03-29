#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL,"");
    int n;
    int quantP=0,quantI=0;
    int quantPo=0,quantN=0,quantZ=0;
    int quant2=0,quant3=0,quant5=0;
    int maior,menor,media=0;

    cout << "Quantos numeros voce quer armazenar?\n";
    cin >> n;

    int num[n];
    int num2[n];
    int repeticao[n]={0};
    int posicaoEsq;
    int aux;
    int maiorRep=0,MaiorRepNum=0;
    bool confirm=false;
    int posicaoDir=0;
    int teste[n]={0};

    for (int i=0;i<n;i++)
    {
        cout << "Digite o " << i+1 << "º numero:\n";
        cin >> num[i];
    }

    maior = num[0];
    menor = num[0];


    for (int i=0;i<n;i++)
    {
    if(num[i] %2==0) {quantP++;}
    else{quantI++;}

    if(num[i] >0) {quantPo++;}
    else if  (num[i] == 0) {quantZ++;}
    else {quantN++;}

    if (num[i] %2==0) {quant2++;}
    if (num[i] %3==0) {quant3++;}
    if (num[i] %5==0) {quant5++;}

    if (num[i] > maior) {maior = num[i];}
    if (num[i] < menor) {menor = num[i];}

    media += num[i];
    }

    system("cls");

    cout << "Quantidade de numeros pares: " << quantP << endl
    << "Quantidade de numeros impares: " << quantI << endl
    << "Quantidade de numeros positivos: " << quantPo << endl
    << "Quantidade de numeros negativos: " << quantN << endl
    << "Quantidade de zeros: " << quantZ << endl
    << "Quantidade de multiplos de 2: " << quant2 << endl
    << "Quantidade de multiplos de 3: " << quant3 << endl
    << "Quantidade de multiplos de 5: " << quant5 << endl
    << "Maior numero: " << maior << endl
    << "Menor numero: " << menor << endl
    << "Media dos numeros: " << media/n << endl << endl;


    for (int i=0; i <n;i++)
{
    num2[i] = num[i];
}

    cout << "Vetor original: ";

    for (int i=0; i <n;i++)
{
    cout << num[i] << " ";
}

for (int i=0;i<n;i++)
{
    if (num2[i]%2==0)
    {
        teste[i] = 1;
    }
}

for (int i=0;i<n;i++)
{
    posicaoEsq = i;



    for (int j=n-1-posicaoDir;j>posicaoEsq;j--)
    {

        if (teste[i]!=1 && teste[j]!=1)
        {
            aux = num2[j];
            num2[j] = num2[posicaoEsq];
            num2[posicaoEsq] = aux;
            posicaoEsq++;
            posicaoDir++;
            teste[i] = 1;
            teste[j] = 1;
        }


    }
}


cout << "\n\nVetor reorganizado: ";

    for (int i=0; i <n;i++)
{
    cout << num2[i] << " ";
}

cout << endl;




    for (int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        {
            if(num[i] == num[j])
            {
                repeticao[i]++;
            }
        }

    }

    for (int i=0;i<n;i++)
    {
    }

    for (int i=0;i<n;i++)
    {
        if (maiorRep < repeticao[i])
                {
                    maiorRep = repeticao[i];
                    MaiorRepNum = i;
                }
    }

    for (int i=0;i<n;i++)
    {

    if(repeticao[i] >1)
    {
        confirm = true;
    }
    }

    if (confirm ==true)
    {
    cout << "\n\nHa numeros que se repetem\n";

    cout << "Numero que mais se repete: " << num[MaiorRepNum] << endl;
    }

}