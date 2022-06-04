#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int nA, nB, nC, producto, suma;
  float media;
  cout << "Ingrese 3 numeros enteros: " << endl;
  cin >> nA;
  cin >> nB;
  cin >> nC;
  suma = nA + nB + nC;
  media = (suma / 3);
  producto = nA * nB * nC;
  cout << "la suma de los 3 numeros es: " << suma << ", la media: " << media << " y el producto:" << producto << endl;
}
