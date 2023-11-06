#include <iostream>
using namespace std;
struct Alumno
{
    int Nlegajo;
    string nombre;
};

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
    int N = 4, M = 5, k = 0;
    Alumno vecLab[N] = {{111, "Pepe"}, {222, "gordo"}, {333, "johan"}, {444, "el brian"}};
    Alumno vecProg[M] = {{111, "pepe"}, {333, "johan"}, {444, "el brian"},{555, "cecilia"},{888, "laura"}};
    Alumno vecPrograman[100];
    quienesPrograman(vecLab, N, vecProg, M, vecPrograman, k);
    for (int i = 0; i < k; i++)
    {
        cout << vecPrograman[i].Nlegajo << "\t";
        cout << vecPrograman[i].nombre;
        cout << endl;
    }
    return 0;
}