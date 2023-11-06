/*Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un Nombre =
‘FIN’, informar el nombre de la persona con mayor edad y el de la más joven.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int fecha=0, FechaMayor =99999999, fechamenor =-9999999;
   string Nombres,NombreMayor,nombremenor;
   while (Nombres != "FIN")
   {
      cout << "Digite Su Fecha en formato AAAAMMDD: "<<endl;
      cin >> fecha;
      cin.ignore(100, '\n');
      cout << "Digite Sus Nombres: "<<endl;
      getline(cin, Nombres);
      if (fecha < FechaMayor && Nombres!="FIN")
      {
         FechaMayor = fecha;
         NombreMayor = Nombres;
      }
      if (fecha > fechamenor && Nombres!="FIN")
      {
         fechamenor = fecha;
         nombremenor = Nombres;

      }
   }
    cout << "La persona mayor es: " << NombreMayor << endl;
    cout << "La persona menor es: " << nombremenor << endl; 

   system("pause");
   return 0;
}