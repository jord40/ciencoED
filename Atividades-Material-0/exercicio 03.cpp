#include <iostream>

using namespace std;

int main()
{
    int horas;
    float salarioM,salarioB,salarioL;

    cout << "Quantas horas foram trabalhadas\n";
    cin >> horas;

    cout << "Qual o salario minimo\n";
    cin >> salarioM;

    salarioB = horas * salarioM/2;
    salarioL = salarioB - salarioB*0,03;

    cout << "Salario Liquido a receber: R$ " << salarioL <<",00";


}
