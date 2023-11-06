/*
1) Cree un programa que permita ingresar una lista de no más de 100 elementos,
siendo nombre de estación y cantidad de kilómetros hasta la primera estación, por ejemplo:

String nombreDeLaEstacion,
int cantidadDeKilometros
t * v = d

Detenga el ingreso cuando nombre de la estación sea "Fin.", luego muestre la lista ordenandola por cantidad de kilómetros en forma ascendente.

2) Use el programa anterior y extiendalo para que luego de mostrar la lista de estaciones,
el usuario pueda ingresar una lista con nombre de trenes, hora de salida de la primera estación y velocidad promedio,
deteniendo la carga cuando nombre del tren sea "Fin.", luego solicite al usuario la hora actual y
muestre una lista indicando en qué estación se encuentra cada tren.

Nota: cuando el tren se encuentre entre estaciones, nombrar siempre la última que visitó.*/
#include <iostream>
using namespace std;

struct Estacion
{
    string nombreDeLaEstacion;
    int cantidadDeKilometros;
};

struct Tren
{
    string nombreDelTren;
    int horaDeSalida;
    int velocidadPromedio;
};

struct UbicacionTren
{
    string nombreDelTren;
    string estacionActual;
    int horaDeSalida;
    int velocidadPromedio;
};

void ordenarEstacionesAscendente(Estacion arr[], int n)
{
    int i, j;
    Estacion temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j].cantidadDeKilometros > arr[j + 1].cantidadDeKilometros)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mostrarListaEstaciones(Estacion arr[], int n)
{
    cout << "Lista de estaciones ordenada por cantidad de kilómetros ascendente:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].cantidadDeKilometros << " km"
             << "\t" << arr[i].nombreDeLaEstacion << endl;
    }
}

void ubicarTrenes(UbicacionTren arrUbicacion[], int cantTrenes, Estacion arrEstaciones[], int cantEstaciones, int horaActual)
{
    for (int i = 0; i < cantTrenes; i++)
    {
        int tiempoRecorrido = (horaActual - arrUbicacion[i].horaDeSalida);
        int minutos=(tiempoRecorrido%100)/60; 
        int horas=tiempoRecorrido/100;
        tiempoRecorrido=horas+minutos;
        int distanciaRecorrida = arrUbicacion[i].velocidadPromedio * tiempoRecorrido;
        int indiceEstacion = 0;

        // Buscar la estación actual del tren
        while (indiceEstacion < cantEstaciones && distanciaRecorrida >= arrEstaciones[indiceEstacion].cantidadDeKilometros)
        {
            indiceEstacion++;
        }
        arrUbicacion[i].estacionActual = arrEstaciones[indiceEstacion].nombreDeLaEstacion;
    }
}

int main()
{
    const int MAX_ESTACIONES = 100;
    const int MAX_TRENES = 100;
    Estacion arrEstaciones[MAX_ESTACIONES];
    Tren arrTrenes[MAX_TRENES];
    UbicacionTren arrUbicacion[MAX_TRENES];
    int cantEstaciones = 0;
    int cantTrenes = 0;

    // Ingresar lista de estaciones
    cout << "Ingrese la lista de estaciones y la cantidad de kilómetros hasta la primera estación:" << endl;
    for (int i = 0; i < MAX_ESTACIONES; i++)
    {
        cout << "Nombre de la estación (Ingrese 'Fin.' para finalizar): ";
        cin >> arrEstaciones[i].nombreDeLaEstacion;

        if (arrEstaciones[i].nombreDeLaEstacion == "Fin.")
            break;

        cout << "Cantidad de kilómetros: ";
        cin >> arrEstaciones[i].cantidadDeKilometros;
        cantEstaciones++;
    }

    ordenarEstacionesAscendente(arrEstaciones, cantEstaciones);
    mostrarListaEstaciones(arrEstaciones, cantEstaciones);

    // Ingresar lista de trenes
    cout << endl
         << "Ingrese la lista de trenes, hora de salida de la primera estación y velocidad promedio:" << endl;
    for (int i = 0; i < MAX_TRENES; i++)
    {
        cout << "Nombre del tren (Ingrese 'Fin.' para finalizar): ";
        cin >> arrTrenes[i].nombreDelTren;

        if (arrTrenes[i].nombreDelTren == "Fin.")
            break;

        cout << "Hora de salida (en formato 24 horas): ";
        cin >> arrTrenes[i].horaDeSalida;
        cout << "Velocidad promedio (en km/h): ";
        cin >> arrTrenes[i].velocidadPromedio;
        cantTrenes++;
    }

    int horaActual;
    cout << "Ingrese la hora actual (en formato 24 horas): ";
    cin >> horaActual;

    for (int i = 0; i < cantTrenes; i++)
    {
        arrUbicacion[i].nombreDelTren = arrTrenes[i].nombreDelTren;
        arrUbicacion[i].horaDeSalida = arrTrenes[i].horaDeSalida;
        arrUbicacion[i].velocidadPromedio = arrTrenes[i].velocidadPromedio;
    }

    ubicarTrenes(arrUbicacion, cantTrenes, arrEstaciones, cantEstaciones, horaActual);

    cout << endl
         << "Ubicación de los trenes:" << endl;
    for (int i = 0; i < cantTrenes; i++)
    {
        cout << "Tren: " << arrUbicacion[i].nombreDelTren << ", Estación actual: " << arrUbicacion[i].estacionActual << endl;
    }

    return 0;
}