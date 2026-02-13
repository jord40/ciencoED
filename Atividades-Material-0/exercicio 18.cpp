#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Digite um numero para mostrar sua tabuada:\n";
    cin >> num;

    cout << "Tabuada do numero " << num << endl;

    for(int i=0;i<10;i++)
    {
        cout << num << " * " << i+1 << " = " << num*(i+1) << endl;
    }
}
