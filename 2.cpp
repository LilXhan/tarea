#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int segundos, horas, minutos;
  cout << "Ingrese los segundos a convertir: " << endl;
  cin >> segundos;
  if (segundos < 60)
  {
    cout << "0 horas "
         << "0 minutos "
         << segundos << " segundos" << endl;
  }
  else
  {
    if (segundos < 3600)
    {
      minutos = segundos / 60;
      segundos = segundos - (minutos * 60);
      cout << "0 horas "
           << minutos << " minutos "
           << segundos << " segundos" << endl;
    }
    else
    {
      horas = segundos / 3600;
      minutos = (segundos - (3600 * horas)) / 60;
      segundos = (segundos % 3600);
      segundos = segundos % 60;
      cout << horas << " horas "
           << minutos << " minutos "
           << segundos << " segundos" << endl;
    }
  }
}
