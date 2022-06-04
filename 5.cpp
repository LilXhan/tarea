#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float tempF, tempC;
  cout << "Ingrese la temperatura Fahrenheit(tempF): " << endl;
  cin >> tempF;
  tempC = (tempF - 32) / 1.8;
  cout << "La temperatura en celcius es(TempC): " << tempC << " C°" << endl;
}
