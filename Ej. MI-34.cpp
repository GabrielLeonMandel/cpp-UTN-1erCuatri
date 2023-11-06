/*Desarrollar una función tal que dado un número entero positivo calcule y retorne su factorial*/
#include <iostream>
using namespace std;

int factorial(int nro)
{
    int nrofact = 1;
    while (nro>1)
    {
        nrofact*=nro--;
    }

    return nrofact;
}

int main()
{
    int nro1 = 0;
    cout << "Digite Un Nro Entero Positivo" << endl;
    cin >> nro1;
    cout << "!" << nro1 << "=" << factorial(nro1) << endl;
    system("pause");

    return 0;
}