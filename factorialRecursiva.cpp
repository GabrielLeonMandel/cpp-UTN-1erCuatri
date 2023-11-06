/*Desarrollar una función tal que dado un número entero positivo calcule y retorne su factorial*/
#include <iostream>
using namespace std;
int factorial(int nro)
{  
    if (nro == 1)
    {
        return nro;
    }
    else
    {
      return nro*factorial(nro - 1);
    }
}

int main()
{
    int nro;
    cout << "Digite Un Nro Entero Positivo" << endl;
    cin >> nro;
    cout << "!" << factorial(nro) << endl;
    return 0;
}