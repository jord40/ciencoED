#include <iostream>

using namespace std;

int main()
{
    int quant;
    cout << "Quantas pessoas estão no cinema\n";
    cin >> quant;

    int idade[quant],opiniao[quant],somaOp;
    float mediaId;
    int otimo=0,bom=0,regular=0,ruim=0;

    cout << "opiniao: [1] - Otimo\n[2] - Bom\n[3] - Regular\n[4] - Ruim\n\n";

    for(int i=0;i <quant;i++)
    {
    cout << "Informe a sua idade" << endl;
    do
    {
        cin >> idade[i];

        if(idade[i] <0)
        {
            cout << "Digite uma idade existente:\n";
        }
    }
    while(idade[i] <0);

    cout << "Qual a sua opiniao" << endl;
    cin >> opiniao[i];


    mediaId = mediaId + idade[i];

    }

    for(int i=0;i<quant;i++)
    {
        switch (opiniao[i])
    {
    case 1:
        otimo++;
        break;
    case 2:
        bom++;
        break;
    case 3:
        regular++;
        break;
    case 4:
        ruim++;
        break;
    }
    }


    cout << quant << " Pessoas responderam a pesquisa" << endl;
    cout << "A media da idade foi: " << mediaId/quant << endl;
    cout << "Porcentagem de otimo = " << otimo*100/quant << "%"<< endl;
    cout << "Porcentagem de bom = " << bom*100/quant << "%"<< endl;
    cout << "Porcentagem de regular = " << regular*100/quant << "%"<< endl;
    cout << "Porcentagem de ruim = " << ruim*100/quant << "%"<< endl;
}
