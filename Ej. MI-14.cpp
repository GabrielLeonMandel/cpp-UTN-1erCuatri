/*Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que
–10*/
#include <iostream>
using namespace std;

int main()
{
    int nro, suma, contdivisor, denominador;
    float promedio;
    contdivisor = 0;
    suma = 0;
    denominador = 0;
    for (int i = 0; i < 50; i++)
    {
        cout << "Digitite Un Nro Entero: " << endl;
        cin >> nro;
        if (nro > 100)
        {
            contdivisor++;
            denominador += nro;
            promedio = denominador / contdivisor;
        }
        if (nro < -10)
        {
            suma += nro;
        }
    }

    cout << "La suma de los menores de -10 es: " << suma << endl;
    cout << "El promedio de los mayores que 100 es: " << promedio << endl;

    system("pause");
    return 0;
}