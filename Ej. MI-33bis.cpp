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

int main()
{
    int mcd = 0, nroa = 0, nrob = 0;
    cout << "Digite El Primer Nro" << endl;
    cin >> nroa;
    cout << "Digite El Segundo Nro" << endl;
    cin >> nrob;
    mcd = maximoComunDivisor(nroa, nrob);
    cout << "El maximo comun divisor entre " << nroa << " y " << nrob << " es: " << mcd << endl;
    return 0;
}