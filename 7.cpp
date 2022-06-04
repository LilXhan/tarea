#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a, b;
  cout << "Ingrese 2 números: " << endl;
  cin >> a;
  cin >> b;
  if (a > b)
  {
    cout << "{" << a << ", " << b << "}" << endl;
  }
  else
  {
    cout << "Vuelve a intentarlo!" << endl;
  }
}
