/*Dados N números naturales de 3 dígitos ingresados, informar cuántos eran capicúa. Realizar diagrama o
codificación*/
#include <iostream>
using namespace std;

int main()
{
    int Nveces = 0, numero = 0, bitmasig = 0, bitmenosig = 0, cuantoscapicua = 0;
    cout << "Digite Cuantas veces: " << endl;
    cin >> Nveces;
    for (int i = 0; i <= Nveces; i++)
    {
        cout << "Ingrese el numero natural de tres digitos" << endl;
        cin >> numero;
        bitmasig = (numero / 100);
        bitmenosig = (numero % 10);
        if (bitmasig == bitmenosig)
        {
            cuantoscapicua++;
        }
    }
    cout << "La cantidad de numeros capicua ingresados es de: " << cuantoscapicua << endl;
    
    return 0;
}