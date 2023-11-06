#include <iostream>
using namespace std;
struct Alumnos
{
    int edad;
    float notaFinal;
    string nombre;
    int DNI;
};

int main()
{
    int N, i = 0, contadormas10 = 0,acc=0,contador=0;
    float promedio=0;
    cout << "ingrese la cantidad de alumnos < 5000" << endl;
    cin >> N;
    Alumnos vector[N];
    if (N > 5000)
    {
        return 0;
    }
    while (vector[i].DNI != 0)
    {
        cout << "ingrese su dni" << endl;
        cin >> vector[i].DNI;
        if (vector[i].DNI == 0)
        {
            break;
        }
        cout << "ingrese su nombre" << endl;
        cin >> vector[i].nombre;
        cout << "ingrese su nota" << endl;
        cin >> vector[i].notaFinal;
        if (vector[i].notaFinal == 10)
        {
            contadormas10++;
        }
        acc+=vector[i].notaFinal;

        cout << "ingrese su edad" << endl;
        cin >> vector[i].edad;
        contador++;

        i++;
    }
    promedio=acc/(float)contador;
    for (int i = 0; i < contador; i++)
    {
        if (vector[i].notaFinal > 8)
        {
            cout<< vector[i].nombre<<endl;
            cout<< vector[i].notaFinal<<endl;
        }
        
    }
     for (int i = 0; i < contador; i++)
    {
        if (vector[i].notaFinal < 8)
        {
            cout<< vector[i].nombre<<endl;
            cout<< vector[i].notaFinal<<endl;
        }
        
    }
    cout<<"el promedio es : "<<promedio<<endl;
    cout<<"los que tiene como nota final mas de 10 son :"<<contadormas10<<endl;
    
    
    
    return 0;
}