#include <iostream>
using namespace std;

int main()
{
    int numeroA, numeroB;
    float resultado;
    char operacion;
    cout << "Ingrese el nro A:" << endl;
    cin >> numeroA;
    cout << "Ingrese el nro B:" << endl;
    cin >> numeroB;
    cout << "Ingrese la operacion + - * / :";
    cin >> operacion;

    switch (operacion)
    {
    case '+':
        resultado = numeroA + numeroB;
        break;
    case '-':
        resultado = numeroA - numeroB;
        break;
    case '*':
        resultado = numeroA * numeroB;
        break;
    default:
        if (numeroB != 0)
        {
            resultado = numeroA / numeroB;
        }
        break;
    }

    if (numeroB != 0)
    {
        cout << numeroA << " " << operacion << " " << numeroB << " = " << resultado << endl;
    }
    else
    {
        cout << "No es posible dividir por 0" << endl;
    }

    system("pause");
    return 0;
}