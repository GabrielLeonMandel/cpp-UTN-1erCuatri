#include <iostream>
using namespace std;
int fibonacci(int ciclado)
{
  if (ciclado == 0 || ciclado == 1)
  {
    return 1;
  }
  else
  {
    return fibonacci(ciclado - 1) + fibonacci(ciclado - 2);
  }
}

int main()
{
  int ciclo;
  cout << "Digite La cantidad De Veces" << endl;
  cin >> ciclo;
  cout << fibonacci(ciclo) << endl;
  return 0;
}