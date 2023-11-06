/*2. Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
demás.*/
#include <iostream>
using namespace std;

int main()
{
   int N;
   cout << "Ingrese el valor de N (<30)" << endl;
   cin >> N;

   int conjunto[N];
   for (int i = 0; i < N; i++)
   { cout<<"Digite un numero entero"<<endl;
     cin>>conjunto[i];
   }

   int ultimoElemento = conjunto[N - 1];
   if (ultimoElemento < 10)
   {
      cout << "Los elementos negativos del conjunto son: ";
      for (int i = 0; i < N; i++)
      {
         if (conjunto[i] < 0)
         {
            cout << conjunto[i] << endl;
         }
      }
   }
   else
   {
      for (int i = 0; i < N; i++)
      {
         if (conjunto[i] > 0)
         {
            cout << conjunto[i] << endl;
         }
      }
   }
   system("pause");
   return 0;
}