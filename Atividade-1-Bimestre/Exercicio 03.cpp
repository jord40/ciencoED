#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int n;
    int quantP=0,quantI=0,quantPo=0,quantN=0,quantZ=0,quant3=0,quant5=0,quant35=0,Maior,Menor,mediaI=0,mediaP=0;

    cout << "Digite a quantidade de repeticoes:\n";
    cin >> n;

    int num[n];

    for(int i=0; i< n;i++)
    {
        cout << "Digite o " << i+1 << "º numero\n";
        cin >> num[i];
    }

    for(int i=0; i< n;i++)
    {
        cout << num[i] << " - " << (num[i] %2==0 ? "Par" : "Impar")
             << (num[i] >0 ? ", Positivo" : ", Negativo") << (num[i] ==0 ? ", Zero" : "");
             if (num[i] %3==0 && num[i] %5!=0) { cout << ", Multiplo de 3";}
             else if (num[i] %3!=0 && num[i] %5==0) { cout << ",  Multiplo de 5";}
             else if (num[i] %3==0 && num[i] %5==0){ cout << ", Multiplo de 3 e 5";}
             cout << endl;
    }

    cout << endl;

    for (int i=0;i<n;i++)
    {
    num[i] %2==0 ? quantP++ : quantI++;

    if(num[i] >0)
    {
        quantPo++;
    }
    else if (num[i] ==0)
    {
        quantZ++;
    }
    else
    {
        quantN++;
    }

    if (num[i] %3==0) {quant3++;}
    if (num[i] %5==0) {quant5++;}
    if (num[i] %3==0 && num[i] %5==0) {quant35++;}

    if (num[i] %2==0)
    {
        mediaP += num[i];
    }

    else
    {
        mediaI += num[i];
    }

    }

    Maior = num[0];
    Menor = num[0];

    for (int i=1; i<n;i++)
    {
        if (num[i] > Maior)
        {
            Maior = num[i];
        }
        if (num[i] < Menor)
        {
            Menor = num[i];
        }
    }


    cout << "Quantidade de numeros pares: " << quantP << endl;
    cout << "Qantidade de numeros impares: " << quantI << endl;
    cout << "Quantidade de numeros positivos: " << quantPo << endl;
    cout << "Quantidade de numeros negativos: " << quantN << endl;
    cout << "Quantidade de zeros: " << quantZ << endl;
    cout << "Quantidade de multiplo de 3: " << quant3 << endl;
    cout << "Quantidade de multiplos de 5: " << quant5 << endl;
    cout << "Quantidade de multiplos de 5 e 3: " << quant35 << endl;
    cout << "Maior numero digitado: " << Maior << endl;
    cout << "Menor numero digitado: " << Menor << endl;
    cout << "Media dos numeros pares: " << mediaP/quantP << endl;
    cout << "Media dos numeros impares: " << mediaI/quantI << endl;
}


