/* Ingresar e informar valores, mientras que el valor ingresado no sea negativo. Informar la cantidad de valores
ingresados.
*/
#include <iostream>
using namespace std;

int main () {
 int valor,cantidadV;
 cantidadV=0;
while (valor > 0)
{
   cout<<"Digite El valor: "<<endl;
   cin>>valor;
   cantidadV++;
   cout<<cantidadV<<endl; 
}

 return 0;
}