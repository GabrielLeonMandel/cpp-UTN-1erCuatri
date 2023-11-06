/*Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De cada infracción se
tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
• Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
• La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.*/
#include <iostream>
using namespace std;
int main()
{
    int tipo, clausurar = 0;
    string motivo;
    float Valor, valorL = 0, valorM = 0, valorG = 0;
    char gravedad;
    for (int i = 0; i < 20; i++)
    {
        cout << "Digite El Tipo de Infraccion (1, 2, 3, o 4): " << endl;
        cin >> tipo;
        cin.ignore(100, '\n');
        cout << "Digite El Motivo de la infraccion: " << endl;
        getline(cin, motivo);
        cout << "Digite El Valor de la multa" << endl;
        cin >> Valor;
        cin.ignore(100, '\n');
        cout << "Digite La Gravedad de la infraccion (L,M,G): " << endl;
        cin >> gravedad;
        cin.ignore(100, '\n');

        switch (gravedad)
        {
        case 'L':
            valorL += Valor;
            break;
        case 'M':
            valorM += Valor;
            break;
        case 'G':
            valorG += Valor;
            break;
        }

        if ((tipo == 3 || tipo == 4) && gravedad == 'G')
        {
            clausurar++;
        }
    }
    cout << endl
         << endl;
    cout << "Valores acumulados por gravedad:" << endl;
    cout << "Valor acumulado Gravedad L: " << valorL << endl;
    cout << "Valor acumulado Gravedad M: " << valorM << endl;
    cout << "Valor acumulado Gravedad G: " << valorG << endl;

    cout << endl;
    if (clausurar > 3)
    {
        cout << "Clausurar Fabrica" << endl;
    }

    system("pause");

    return 0;
}