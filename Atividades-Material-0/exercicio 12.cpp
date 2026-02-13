#include <iostream>

using namespace std;

int main()
{
    int num[3],maior;

    for(int i=0;i<3;i++)
    {
        cout << "Digite o " << i+1 << "° numero\n";
        cin >> num[i];

        maior = num[0];

    }

    for(int i=1;i<3;i++)
    {
        if(maior < num[i])
        {
            maior = num[i];
        }
    }

    cout << "O maior numero é " << maior;
}
