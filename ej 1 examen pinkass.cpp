/*1) Se desea conocer qué alumnos cursan Programación o Laboratorio. Para hacerlo se dispone de la lista de
alumnos de cada materia, y de cada alumno se conoce: Legajo (entero de 8 dígitos) y Nombre.
Realizar codificación del procedimiento quienesPrograman que reciba los vectores de ambas materias y
complete un tercer vector.
Consideraciones
● Los vectores recibidos están ordenados en forma ascendente por legajo, y así se debe generar el
tercero.
● El vector generado no debe tener alumnos repetidos, es decir si Juan cursa ambas materias en el
tercer vector solo debe aparecer una vez.
● Cada alumno está como máximo solamente una vez en cada vector
● No preocuparse por quién dimensiona el tercer vector, ni su cantidad de elementos, se recibe
por parámetro y se usa.*/

#include <iostream>
using namespace std;
struct Alumno
{
    int legajo;
    string nombre;
};
void quienesPrograman(const Alumno programacion[], int tamProg, const Alumno laboratorio[], int tamLab, Alumno resultado[], int &tamResultado)
{
    int i = 0; // Índice para recorrer el arreglo de programación
    int j = 0; // Índice para recorrer el arreglo de laboratorio
    int k = 0; // Índice para llenar el arreglo resultado

    while (i < tamProg && j < tamLab)
    {
        // Comparar los legajos de los alumnos en las dos materias
        if (programacion[i].legajo < laboratorio[j].legajo)
        {
            resultado[k] = programacion[i];
            i++;
        }
        else if (programacion[i].legajo > laboratorio[j].legajo)
        {
            resultado[k] = laboratorio[j];
            j++;
        }
        else
        {
            // Si los legajos son iguales, solo se agrega el alumno una vez al resultado
            resultado[k] = programacion[i];
            i++;
            j++;
        }
        k++;
    }

    // Agregar los alumnos restantes en el arreglo de programación
    while (i < tamProg)
    {
        resultado[k] = programacion[i];
        k++;
        i++;
    }

    // Agregar los alumnos restantes en el arreglo de laboratorio
    while (j < tamLab)
    {
        resultado[k] = laboratorio[j];
        k++;
        j++;
    }

    // Actualizar el tamaño del arreglo resultado
    tamResultado = k;
}

int main()
{
    int N = 4, M = 5, k = 0;
    Alumno vecLab[N] = {{111, "Pepe"}, {222, "gordo"}, {333, "johan"}, {444, "el brian"}};
    Alumno vecProg[M] = {{111, "pepe"}, {333, "johan"}, {444, "el brian"}, {555, "cecilia"}, {888, "laura"}};
    Alumno vecPrograman[100];
    quienesPrograman(vecLab, N, vecProg, M, vecPrograman, k);
    for (int i = 0; i < k; i++)
    {
        cout << vecPrograman[i].legajo << "\t";
        cout << vecPrograman[i].nombre;
        cout << endl;
    }

    return 0;
}