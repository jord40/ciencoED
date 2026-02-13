#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int voto;
    float voto1,voto2,votoN,votoB,fim=0,soma;


    cout << "Insira um valor" << endl;

  do
    {
    cin >> voto;

    switch (voto)
    {
    case 1:
        {
            voto1++;
            break;
        }

    case 2:
        {
            voto2++;
            break;
        }

    case 3:
        {
            votoN++;
            break;
        }

    case 4:
        {
            votoB++;
            break;
        }

    case 0:
        {
            fim++;
            break;
        }

    default:
    {
        "Erro";
        break;
    }

    }

    } while(fim !=1);

    soma= voto1+voto2+votoN+votoB;

    cout << "Percentual de votos no 1° = " <<  voto1*100/soma << "%" << endl;
    cout << "Percentual de votos no 2° = " <<  voto2*100/soma << "%" << endl;
    cout << "Percentual de votos nulos = " <<  votoN*100/soma << "%" << endl;
    cout << "Percentual de votos brancos = " <<  votoB*100/soma << "%" << endl;


}
