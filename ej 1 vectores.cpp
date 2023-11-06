/*Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
contengan los primeros números naturales pares e imprimirlo.*/
#include <iostream>
using namespace std;

void leer(string mensaje, int &valor)
{
    cout << mensaje;
    cin >> valor;
    return;
}

void imprimir(int vector[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << vector[i] << endl;
    }
}

int main()
{
    int cantElementos;
    leer("Ingrese la cantidad de elementos (< 25):", cantElementos);
    int numeroNaturalesPares[cantElementos];

    int cantNros = 0;
    int nro = 2;
    while (cantNros < cantElementos)
    {
        if (nro % 2 == 0)
        {
            numeroNaturalesPares[cantNros] = nro;
            cantNros++;
        }

        nro++;
    }

    cout << "Primer version" << endl;
    imprimir(numeroNaturalesPares, cantElementos);

    for (int i = 0; i < cantElementos; i++)
    {
        numeroNaturalesPares[i] = (i + 1) * 2;
    }

    cout << "Segunda version" << endl;
    imprimir(numeroNaturalesPares, cantElementos);

    system("pause");
    return 0;
}