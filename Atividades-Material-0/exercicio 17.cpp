#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Digite um numero entre 1 e 10:\n";

    do
    {
    cin >> num;
    }while(num<1 || num >10);
}
