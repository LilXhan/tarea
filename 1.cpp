#include <iostream>
#include <math.h>
using namespace std;

int main()

{
  int peso;
  float altura, indiceMasaCorporal;
  cout << "POGRAMA PARA CALCULAR SU INDICE DE MASA" << endl;
  cout << "Ingrese su peso en KG: " << endl;
  cin >> peso;
  cout << "Ingrese su altura en metros:" << endl;
  cin >> altura;
  indiceMasaCorporal = peso / pow(altura, 2);
  cout << "Su indice de masa es: " << indiceMasaCorporal << endl;
}
