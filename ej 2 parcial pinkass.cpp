/*Utilizando el vector de alumnos que programan se desea realizar un listado por consola con la
información de contacto. Para esto la facultad dispone de un conjunto de datos de Alumnos ordenados
por Legajo en forma ascendente, que contiene:
● Legajo (entero de 8 dígitos)
● Apellido y Nombre (texto)
● Email (texto)
● Telefono (entero)
Realizar el diagrama del procedimiento o función que reciba el vector de quienes programan y el vector
de datos de alumnos e imprima el listado ordenado por apellido y nombre:
APELLIDO Y NOMBRE LEGAJO EMAIL TELEFONO*/
#include <iostream>
using namespace std;
struct Alumno
{
    int Nlegajo;
    string nombre;
};

struct datos
{
    int legajo;
    string apellidoYNombre;
    string email;
    int telefono;
};

void quienesProgramanYDatos(Alumno vecLab[], int N, Alumno vecProg[], int M, Alumno vecPrograman[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < N && j < M)
    {
        if (vecLab[i].Nlegajo == vecProg[j].Nlegajo)
        {
            vecPrograman[k] = vecProg[j];
            i++;
            j++;
        }
        else if (vecLab[i].Nlegajo < vecProg[j].Nlegajo)
        {
            vecPrograman[k] = vecLab[i];
            i++;
        }
        else
        {
            vecPrograman[k] = vecProg[j];
            j++;
        }
        k++;
    }
    while (i < N)
    {
        vecPrograman[k] = vecLab[i];
        i++;
        k++;
    }
    while (j < M)
    {
        vecPrograman[k] = vecProg[j];
        j++;
        k++;
    }
}
void quienesPrograman(Alumno vecLab[], int N, Alumno vecProg[], int M, Alumno vecPrograman[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < N && j < M)
    {
        if (vecLab[i].Nlegajo == vecProg[j].Nlegajo)
        {
            vecPrograman[k] = vecProg[j];
            i++;
            j++;
        }
        else if (vecLab[i].Nlegajo < vecProg[j].Nlegajo)
        {
            vecPrograman[k] = vecLab[i];
            i++;
        }
        else
        {
            vecPrograman[k] = vecProg[j];
            j++;
        }
        k++;
    }
    while (i < N)
    {
        vecPrograman[k] = vecLab[i];
        i++;
        k++;
    }
    while (j < M)
    {
        vecPrograman[k] = vecProg[j];
        j++;
        k++;
    }
}
int main()
{
    int N = 4, M = 5, k = 0,D=6;
    Alumno vecLab[N] = {{111, "Pepe"}, {222, "gordo"}, {333, "johan"}, {444, "el brian"}};
    Alumno vecProg[M] = {{111, "pepe"}, {333, "johan"}, {444, "el brian"},{555, "cecilia"},{888, "laura"}};
    datos vecdata[D]={{111,"Lopezpepe","pepeLopez@gmail.com",1122334455},{222,"Mandelgordo","Mandelgordo@gmail.com",213455543},{333,"Nuñezjohan","johannuñez@gmail.com",282828228},{444,"CastroBrian","castrobriaan@gmail.com",38636386},{555,"OrtmannCeci","ceciOrt@gmail.com",37737332},{888,"MandeLaura","laumandel@gmil.com",28282822}};
    Alumno vecPrograman[100];
    quienesPrograman(vecLab, N, vecProg, M, vecPrograman, k);
    
    for (int i = 0; i < k; i++)
    {
        cout << vecPrograman[i].Nlegajo << "\t";
        cout << vecPrograman[i].nombre;
        cout << endl;
    }
    quienesProgramanYDatos(vecPrograman,k,)
    return 0;
}