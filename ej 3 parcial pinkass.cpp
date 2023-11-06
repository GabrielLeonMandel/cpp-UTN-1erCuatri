/*3) Realizar un programa (diagrama o codificación) que
a. Le pida al usuario que ingrese por consola N números enteros y los almacene en un vector.
b. Informe si los elementos cargados en el vector son “consecutivos ascendentes”
Ejemplo: Si ingresa [9,10,11,12] se imprimirá “Consecutivos ascendentes”.
En cambio, si ingresa [1,4,3,7] imprimirá “No Consecutivos ascendentes”.
En cambio, si ingresa [-2, -1, 0, 1, 2] imprimirá “Consecutivos ascendentes”.*/
#include <iostream>
using namespace std;

int main()
{
    int N, contadorAsc = 0;
    cout << "Digite la cantidad de nros a escribir" << endl;
    cin >> N;
    int vector[N];
    for (int i = 0; i < N; i++)
    {
        cout << "digite un nro" << endl;
        cin >> vector[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (vector[i] < vector[i + 1])
        {
            contadorAsc++;
        }
    }
    if (contadorAsc == N)
    {
        cout << "Son nros ascendentes" << endl;
    }
    else
    {
        cout << "no son ascendentes" << endl;
    }
    return 0;
}