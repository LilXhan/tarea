#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int cA, cB;
  float hipotenusa;
  cout << "PROGRAMA PARA CALCULAR LA HIPOTENUSA" << endl;
  cout << "Ingrese Cateto A: " << endl;
  cin >> cA;
  cout << "Ingrese Cateto B: " << endl;
  cin >> cB;
  hipotenusa = sqrt(pow(cA, 2) + pow(cB, 2));
  cout << "la hipotenusa es: " << hipotenusa << "\n";
}
