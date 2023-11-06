/*Desarrollar una función que calcule el máximo común divisor de dos números enteros A, B con el siguiente
algoritmo:
1) Dividir A por B, y calcular el resto (0 < R < B)
2) Si R = 0, el MCD es B, si no seguir en 3)
3) Reemplazar A por B, B por R, y volver al paso 1)*/
#include <iostream>
using namespace std;

int maximoComunDivisor(int nroA, int nroB)
{
    int resto = 0;

    resto = nroA % nroB;
    while (resto != 0)
    {
        nroA = nroB;
        nroB = resto;
        resto = nroA % nroB;
    }

    return nroB;
}

float promedio(int nroA, int nroB);
float promedio(int nroA, int nroB, int nroC);

int main()
{
    int valorA, valorB;
    int mcd;
    cout << "Ingrese el nro A:";
    cin >> valorA;
    cout << "Ingrese el nro B:";
    cin >> valorB;

    mcd = maximoComunDivisor(valorA, valorB);

    cout << "El maximo comun divisor entre " << valorA << " y " << valorB << " es: " << mcd << endl;
    system("pause");
    return 0;
}

float promedio(int nroA, int nroB)
{
    return (nroA + nroB) / (float)2;
}

float promedio(int nroA, int nroB, int nroC)
{
    return (nroA + nroB + nroC) / (float)3;
}
