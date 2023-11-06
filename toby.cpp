/* Dados N valores informar el mayor, el menor y en qué posición del conjunto fueron ingresados.*/
#include <iostream>
using namespace std;

int main()
{
  int64_t valorMayor, valorMenor, posicionMenor, posicionMayor, NumeroN, Ciclo;
  valorMayor = INT64_MIN;
  valorMenor = INT64_MAX;
  posicionMayor = 0;
  posicionMenor = 0;
  Ciclo = 0;
  NumeroN = 1;
  cout << "Introduce numero, para ver cual es el mayor, el menor y en que posicion estan. Introduce 0 para terminar." << endl;
  while (NumeroN != 0)
  {
    Ciclo++;
    cout << "Introduce el numero: " << endl;
    cin >> NumeroN;
    if (NumeroN > valorMayor && NumeroN != 0)
    {
      posicionMayor = Ciclo;
      valorMayor = NumeroN;
    }
    if ((NumeroN < valorMenor) && (NumeroN != 0))
    {
      valorMenor = NumeroN;
      posicionMenor = Ciclo;
    }
  }
  cout << "El mayor de los valores ingresados es: " << valorMayor << "."
       << " Ingresado en la Linea: " << posicionMayor << endl;
  cout << "El menor de los valores ingresados es: " << valorMenor << "."
       << " Ingresado en la Linea: " << posicionMenor << endl;
  system("pause");
  return 0;
}