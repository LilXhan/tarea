#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a;
  cout << "Ingrese un numero: " << endl;
  cin >> a;
  if (a % 2 == 0)
  {
    cout << "El numero " << a << " es par" << endl;
  }
  else
  {
    cout << "El numero " << a << " es impar" << endl;
  }
}
