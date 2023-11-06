// Dados un mes y el año correspondiente informar cuántos días tiene el mes
/*Meses con 28 días: febrero, menos cuando se trata de un año bisiesto que dura 29 días.
Meses con 30 días: abril(4), junio(6), septiembre(9) y noviembre(11).
Meses con 31 días: enero(1), marzo(3), mayo(5), julio(7), agosto(8), octubre(10) y diciembre(12).*/
#include <iostream>
using namespace std;

int main()
{
    int mes, anio;
    cout << "digite el mes como MM y el anio como AAAA" << endl;
    cin >> mes >> anio;
    if ((((anio % 4) == 0) or ((anio % 400) == 0)) & (mes == 2))
    {
        cout << "El mes tiene 29 dias" << endl;
    }
    else if (mes == 2)
    {
        cout << "El mes tiene 28 dias" << endl;
    }
    else if ((mes == 4) or (mes == 6) or (mes == 9) or (mes == 11))
    {
        cout << "El mes tiene 30 dias" << endl;
    }
    else if ((mes == 1) or (mes == 3) or (mes == 5) or (mes == 7) or (mes == 8) or (mes == 10) or (mes == 12))
    {
        cout << "El mes tiene 31 dias" << endl;
    }
    else
    {
        cout << "La fecha es invalida" << endl;
    }

    system("pause");

    return 0;
}