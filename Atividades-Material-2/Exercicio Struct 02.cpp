#include <iostream>
#include <locale>
#include <stdlib.h>
using namespace std;

struct biblioteca
{
    string titulo,autor;
    int anoP;
};

int main()
{
    setlocale(LC_ALL,"");

    biblioteca livros;

    do
    {

    cout << "Digite o nome do livro" << endl;
    getline(cin,livros.titulo);

    if(livros.titulo == "O pequeno principe")
    {
        break;
    }

    cout << "Digite o nome do autor" << endl;
    getline(cin,livros.autor);


    cout << "Digite o ano de publicação" << endl;
    cin >> livros.anoP;

    cin.ignore();

    system("cls");
    }while(livros.anoP < 2027);
}
