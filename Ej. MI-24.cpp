/*Se dispone de un lote de valores enteros positivos que finaliza con un número negativo.
El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que determine e informe:
a) por cada sublote el promedio de valores
b) el total de sublotes procesados
c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición relativa del mismo dentro
del sublote
d) valor mínimo de cada sublote
Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los sublotes vacíos (ceros
consecutivos)*/
#include <iostream>
using namespace std;

int main()
{
   int nroacumulado = 0, ciclo = 0, TotalSublotesProcesados = 0, nroNegativoAcumulado = 0, Nro0Acumulado = 0, nro = 0, cantNros0 = 0, cantNrosNegativos = 0, cantNrosPositivos = 0, nroPositivoAcumulado = 0, nronegativo = 0, ceros = 0, posicionRelativaMax = 0, posicionRelativaMax0 = 0, valorMax = INT64_MIN, posicionRelativaMaxPostivo = 0, posicionRelativaMaxNegativo = 0, posicioMaxRelativa0 = 0, valorMin0 = INT64_MAX, valorMinNegativo = INT64_MAX, valorMinPositivo = INT64_MAX;
   string SubloteMax, Sublote0 = "EL Sublote Es Cero", SubloteNegativo = "El Sublote Es Negativo", SublotePositivo = "El Sublote Es Positivo";
   float PromedioPositivo = 0, PromedioNegativo = 0, Promedio0 = 0;
   while (nro >= 0)
   {
      ciclo++;
      cout << "Digite Un Nro positivo o un negativo para Terminar" << endl;
      cin >> nro;

      nroacumulado += nro;

      if ((ciclo==1 && nro>=0 )||(ciclo != 1 && nro >= 0) || (ciclo != 1 && nro < 0))
      {
         if (nro > 0)
         {
            cantNrosPositivos++;
            nroPositivoAcumulado += nro;
            PromedioPositivo = nroPositivoAcumulado / cantNrosPositivos;
            if (nro < valorMinPositivo)
            {
               valorMinPositivo = nro;
            }
         }
         if (nro < 0)
         {
            cantNrosNegativos++;
            nroNegativoAcumulado += nro;
            PromedioNegativo = nroNegativoAcumulado / cantNrosNegativos;
            if (nro < valorMinNegativo)
            {
               valorMinNegativo = nro;
            }
         }
         if (nro == 0)
         {
            cantNros0++;
            Nro0Acumulado += nro;
            Promedio0 = Nro0Acumulado / cantNros0;
            if (nro < valorMin0)
            {
               valorMin0 = nro;
            }
         }
         TotalSublotesProcesados = cantNrosPositivos + cantNrosNegativos + cantNros0;

         if (nro > valorMax)
         {
            valorMax = nro;
            if (nro > 0)
            {
               posicionRelativaMaxPostivo++;
               posicionRelativaMax = posicionRelativaMaxPostivo;
               SubloteMax = SublotePositivo;
            }
            if (nro < 0)
            {
               posicionRelativaMaxNegativo++;
               posicionRelativaMax = posicionRelativaMaxNegativo;
               SubloteMax = SubloteNegativo;
            }
            if (nro == 0)
            {
               posicionRelativaMax0++;
               posicionRelativaMax = posicionRelativaMax0;
               SubloteMax = Sublote0;
            }
         }
      }
   }
   if (ciclo == 1 && nro < 0)
   {
      cout << "El Lote esta Vacio" << endl;
   }
   if (nroacumulado == 0)
   {
      cout << "El lote Esta Vacio" << endl;
   }

   if ((ciclo==1 && nro>=0 )||(ciclo != 1 && nro >= 0) || (ciclo != 1 && nro < 0))
   {
      cout << "por cada sublote el promedio de valores es: " << endl;
      cout << "El Promedio del Sublote Negativo Es de: " << PromedioNegativo << endl;
      cout << "El Promedio del Sublote Positivo Es de: " << PromedioPositivo << endl;
      cout << "El Promedio del Sublote 0 Es de: " << Promedio0 << endl;
      cout << "El total de Sublotes Procesados Es de: " << TotalSublotesProcesados << endl;
      cout << "El valor maximo del conjunto Es de: " << valorMax << SubloteMax << " La Posicion Relativa Dentro del Sublote es: " << posicionRelativaMax;
      cout << "El valor Minimo del Sublote Positivo es: " << valorMinPositivo << endl;
      cout << "El valor Minimo del Sublote Negativo es: " << valorMinNegativo << endl;
      cout << "El valor Minimo del Sublote cero es: " << valorMin0 << endl;
   }

   return 0;
}
