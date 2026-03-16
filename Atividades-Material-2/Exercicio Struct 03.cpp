#include <iostream>
#include <locale>
#include <stdlib.h>
#include <string>
using namespace std;

struct filmes
{
    float enredo,atuacao,EE;

};

int main()
{
    setlocale(LC_ALL,"");

    filmes avaliacao;
    int i=1;
    int quant=0;
    float sE,sA,sEE;
    char proxF;
    string nomeFilme;

    do
    {


        if(proxF=='O' || nomeFilme.length()==0)
        {
            if(nomeFilme.length()>0)
            {
            cout << "\nMédia de avaliações do enredo: " << sE/quant
            << "\nMédia de avaliações da atuação: " << sA/quant
            << "\nMédia de avaliações dos efeitos especiais:" << sEE/quant << endl << endl;
            }
        sE=0,sA=0,sEE=0;
            cout << "Qual o nome do filme?" << endl;
            getline(cin,nomeFilme);
        }


        if(proxF=='O')
        {
            quant=0;
        }


        cout << "Digite a avaliacao do enredo de " << nomeFilme  <<":"<< endl;
        cin >> avaliacao.enredo;
        cin.ignore();

        sE += avaliacao.enredo;

        cout << "Digite a avaliacao da atuação do " << nomeFilme  <<":"<< endl;
        cin >> avaliacao.atuacao;
        cin.ignore();

        sA += avaliacao.atuacao;


        cout << "Digite a avaliacao dos efeitos especiais do " << nomeFilme  <<":"<< endl;
        cin >> avaliacao.EE;
        cin.ignore();
        sEE += avaliacao.EE;
    quant++;
        cout << "Quer avaliar outro filme ,continuar a avaliar esse ou sair? O/C/S" << endl;
        cin >> proxF;
        cin.ignore();

        if(proxF=='S')
        {
            cout << "\nMédia de avaliações do enredo: " << sE/quant
            << "\nMédia de avaliações da atuação: " << sA/quant
            << "\nMédia de avaliações dos efeitos especiais:" << sEE/quant << endl << endl;
        }
    }while(proxF!='S');

}
