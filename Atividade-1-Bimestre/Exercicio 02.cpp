#include <iostream>
#include <locale>
#include <cmath>
#include <stdlib.h>

bool trianguloV(float A,float B,float C); float MaiorLado (int A, int B, int C);

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float A,B,C;
    int repeticoes=1;



    cout << "Informe os valor A:\n";
    cin >> A;

    cout << "Informe o valor B:\n";
    cin >> B;

    cout << "Informe o valor C:\n";
    cin >> C;

    if (A == B)
    {
        repeticoes++;
    }

    if (A == C)
    {
        repeticoes++;
    }

    cout << "Os valores " << (trianguloV(A,B,C) ? "formam um triangulo" : "não formam um triangulo") << endl;

    cout << "O triangulo é " << (repeticoes == 3 ? "equilátero" : "") <<
    (repeticoes == 2 ? "isósceles" :"") <<
    (repeticoes == 1 ? "escaleno" :"") << endl;

    cout << "O triangulo é " << (MaiorLado(A,B,C) == 1 ? "triâgulo retângulo" : "")
    << (MaiorLado(A,B,C) == 2 ? "triângulo obtusângulo" :"")
    << (MaiorLado(A,B,C) == 3 ? "triângulo acutângulo" : "");
}

bool trianguloV(float A,float B,float C)
{
  if ( A < B+C && B < A+C && C < A+B)
  {
      return true;
  }

  else
  {
      return false;
  }
}

float MaiorLado (int A, int B, int C)
{
    float L = A;

    if(L < B)
    {
        L = B;
    }
    if (L < C)
    {
        L = C;
    }

    if (pow(L,2) == pow(A,2) + pow(B,2))
    {
        return 1;
    }

    else if (pow(L,2) > pow(A,2) + pow(B,2))
    {
        return 2;
    }

    else if (pow(L,2) < pow(A,2) + pow(B,2))
    {
        return 3;
    }

}
