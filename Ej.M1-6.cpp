//AAAAMMDD
#include <iostream>
using namespace std;

int main()
{
  int fecha1, fecha2, anio1, anio2, mes1, mes2, dia1, dia2;
  cout << "Escriba 2 fechas en formato AAAAMMDD" << endl;
  cin >> fecha1 >> fecha2;

  anio1 = (fecha1 / 10000);
  dia1 = (fecha1 % 100);
  mes1 = ((fecha1 / 100) % 100);

  anio2 = (fecha2 / 10000);
  dia2 = (fecha2 % 100);
  mes2 = ((fecha2 / 100) % 100);

  if (anio1 > anio2)
  {
    cout << "La  fecha mas reciente es: " << fecha1 << endl;
  }
  else if (anio2 > anio1)
  {
    cout << "La  fecha mas reciente es: " << fecha2 << endl;
  }
  else if ((anio1 == anio2) & (mes1 > mes2))
  {
    cout << "La  fecha mas reciente es: " << fecha1 << endl;
  }
  else if ((anio1 == anio2) & (mes2 > mes1))
  {
    cout << "La  fecha mas reciente es: " << fecha2 << endl;
  }
  else if ((anio1 == anio2) & (mes1 == mes2) & (dia1 > dia2))
  {
    cout << "La  fecha mas reciente es: " << fecha1 << endl;
  }
  else if ((anio1 == anio2) & (mes1 == mes2) & (dia2 > dia1))
  {
    cout << "La fecha mas reciente es: " << fecha2 << endl;
  }
  else
  {
    cout << "Las fechas Son iguales" << endl;
  }
  
   system("pause");

  return 0;
}