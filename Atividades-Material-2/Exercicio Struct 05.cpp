#include <iostream>
#include <vector>
#include <locale>
#include <string>

using namespace std;

struct Restaurante
{
    string nomeP;
    int quant;
    float precoT;
};

int main()
{
    vector <Restaurante> restaurantes;

    setlocale(LC_ALL,"");

    Restaurante restaurante;

    bool parar=false;

    do
    {

        cout << "Digite o nome do prato:\n";
        getline(cin,restaurante.nomeP);


        cout << "Digite a quantidade de pratos:\n";
        cin >> restaurante.quant;

        cout << "Digite o preço total:     (0 para parar)\n";
        cin >> restaurante.precoT;

        parar = restaurante.precoT == 0;

        if(parar !=true)
        {
            restaurantes.push_back(restaurante);
        }
        cin.ignore();


    } while(parar==false);

    cout << "Produtos comprados:\n\n";

    for(const auto& e : restaurantes)
    {
        cout << "Nome do prato: " << e.nomeP << "\nQuantidade: " << e.quant << "\nPreço Total: " << e.precoT << endl << endl;
    }

    return 0;
}
