/*Ingresar un valor entero N (< 40). Luego ingresar un conjunto REFER de N elementos reales
(ingresan ordenados por magnitud creciente). Finalmente ingresar un valor pesquisa X.
Desarrollar el programa que determine e imprima:
a) Con cual elemento (posición) del conjunto coincide, o
b) Entre cuales dos elementos (posiciones) se encuentra, o
c) Si es menor que el primero o mayor que el último.*/
#include <iostream>
using namespace std;

int busquedaBinaria(float array[], int posicionTotalArray, float x)
{
    // Cuando arranco evalúo todo el vector de 0 a n - 1
    int inicio = 0;
    int finArray = posicionTotalArray - 1;
    while (finArray >= inicio)
    {
        int mitad = inicio + (finArray - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (array[mitad] == x)
            return mitad;
        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (array[mitad] > x)
        {
            finArray = mitad - 1; // Cambio el limite superior
        }
        else
        {
            inicio = mitad + 1; // Cambio el limite inferior
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}

// 7 5 10 3
// 5 7 3 10 //primera interacion
// 5 3 7 10 //2da interacion
// 5 3 7 10 //3ra
// 3 5 7 10 // 4ta interacion
// 3 5 7 10 // 5ta ordenado=true

void burbujeoMejorado(float array[], int limitearray)
{
    int permutaciones = 0, posicion, swap;
    bool ordenado = false;
    while ((permutaciones < limitearray) && (!ordenado))
    {
        ordenado = true; // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (posicion = 0; posicion < limitearray - permutaciones - 1; posicion++)
        {
            if (array[posicion] > array[posicion + 1])
            {
                swap = array[posicion];
                array[posicion] = array[posicion + 1];
                array[posicion + 1] = swap;
                ordenado = false; // Cambio el flag si hice un swap
            }
        }
        permutaciones++;
    }
}

int main()
{
    int N;
    cout << "ingrese un nro entero" << endl;
    cin >> N;
    if (N >= 40)
    {
        return 0;
    }

    float REFER[N];
    float pesquisaX;

    for (int i = 0; i < N; i++)
    {
        cout << "ingrese un Nro" << endl;
        cin >> REFER[i];
    }

    burbujeoMejorado(REFER, N);

    cout << endl;

    for (int i = 0; i < N; i++)
    {
        cout << REFER[i] << endl;
    }

    cout << "Digite nro a buscar(pesquisaX)" << endl;
    cin >> pesquisaX;
    int indice = -1;
    indice = busquedaBinaria(REFER, N, pesquisaX);

    if (indice != -1)
    {
        cout << "Esta en la Posicion " << indice + 1 << endl;
    }

    int indiceAnterior = -1;
    int indicePosterior = -1;

    if ((indice != -1) && (indice == (N - 1)))
    {
        indiceAnterior = indice - 1;
    }

    if (indice == 0)
    {
        indicePosterior = indice + 1;
    }

    if (((indiceAnterior == -1) && (indicePosterior == -1)) && (indice != -1))
    {
        indiceAnterior = indice - 1;
        indicePosterior = indice + 1;
    }

    if (indiceAnterior != -1)
    {
        cout << "La posicion anterior es: " << indiceAnterior + 1 << endl;
    }

    if (indicePosterior != -1)
    {
        cout << "La posicion Posterior es: " << indicePosterior + 1 << endl;
    }

    if (REFER[indice] > REFER[N - 1])
    {
        cout << "Es mayor que le ultimo" << endl;
    }

    if (REFER[indice] < REFER[0])
    {
        cout << "Es menor que el 1ro" << endl;
    }

    system("pause");

    return 0;
}