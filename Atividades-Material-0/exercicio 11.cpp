#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Digite um numero\n";
    cin >> num;

    if(num %2==0)
    {
        cout << "Par";
    }

    else
    {
        cout << "Impar";
    }
}
