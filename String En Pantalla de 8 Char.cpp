#include <iostream>
#include <conio.h>
#include <unistd.h>
using namespace std;

int main()
{
    string PalabrasImprimir; // La Palabra o frase a Mostrar
    const int MAXCHAR = 8;   // cant constante de caracteres MAX admimitido por el Display
    int CantChar = 0;        // cant de caracteres dentro del string
    cout << "Digite Las Palabras a Imprimir" << endl;
    getline(cin, PalabrasImprimir);       // get line permite guardar espacios
    CantChar = PalabrasImprimir.length(); //.lenght() cuenta los Char
    while (!kbhit())                      // se Loopea mientras no toques el teclado "keyboard Hit"
    {
        for (int cursor = 0; cursor <= (CantChar - MAXCHAR); cursor++) // intera hasta llegar al ultimo indice=(CantChar-MAXCHAR)
        {
            int comienzoDisplay = cursor; // 1er indice Cursor
            int MovimientoCursor = cursor + MAXCHAR;
            for (int i = comienzoDisplay; i < MovimientoCursor; i++)
            {
                cout << PalabrasImprimir[i]; // El string es un arreglo de Char
                usleep(100000);              // espera 100000 microsegundos 0,1 segundos
            }
            cout << endl; // salto de linea
        }
    }
    system("pause");
    return 0;
}