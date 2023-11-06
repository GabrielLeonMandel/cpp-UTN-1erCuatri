/*De un censo realizado en una población se conocen los siguientes datos:
- Día de nacimiento (2 dig.)
- mes (2 dig.)
- Año (4 dig.)
- sexo ('M'=masc. 'F'=fem.)
Con estos datos de cada habitante se forma un lote finalizado con un día cero. Desarrollar el programa que determine e
imprima:
1) Cuántos nacimientos hubo en el mes de octubre de todos los años.
2) Cuántos nacimientos hubo antes del 9 de julio de 1990.
3) Cuántos nacimientos de mujeres hubo en la primavera del 1982.
4) sexo de la persona más vieja (solo existe una).
Primavera (21 de septiembre(9) a 20 de diciembre(12))
(10)(11)*/
#include <iostream>
using namespace std;
bool EsOctubre(int mes)
{

    if (mes == 10)
    {
        return true;
    }
    return false;
}
bool EsAntesDe9Julio1990(int dia, int mes, int anio)
{
    if ((dia != 0) && ((dia < 9 && mes == 7 && anio == 1990) || (anio < 1990) || (mes < 7 && anio == 1990)))
    {
        return true;
    }
    return false;
}
bool EsFPrimaveraD1982(int dia, int mes, int anio, char sexo)
{
    if ((dia != 0) && ((sexo == 'F' && anio == 1982 && (mes == 10 || mes == 11)) || (sexo == 'F' && anio == 1982 && mes == 9 && dia >= 21) || (sexo == 'F' && anio == 1982 && mes == 12 && dia <= 20)))
    {
        return true;
    }
    return false;
}
int componerfecha(int dia, int mes, int anio)
{
    int fecha;
    fecha = (anio * 10000) + (mes * 100) + (dia);
    return fecha;
}

int main()
{
    int dia = 1, mes, anio, cuantOct = 0, cuantAntes9Djulio1990 = 0, cuantFPrimaverade1982 = 0, fecha, fechaold = 999999999;
    char sexo, SexoOld;

    while (dia != 0)
    {
        cout << "Digite Dia de nacimiento (2 dig.) o 0 para terminar: " << endl;
        cin >> dia;
        if (dia != 0)
        {
            cout << "Digite El mes (2 dig.) De Nacimiento: " << endl;
            cin >> mes;
            cout << "Digite El Anio (4 dig.) De Nacimiento: " << endl;
            cin >> anio;
            cout << "Digite El sexo ('M'=masc. 'F'=fem.): " << endl;
            cin >> sexo;

            if (EsOctubre(mes))
            {
                cuantOct++;
            };
            if (EsAntesDe9Julio1990(dia, mes, anio))
            {
                cuantAntes9Djulio1990++;
            }
            if (EsFPrimaveraD1982(dia, mes, anio, sexo))
            {
                cuantFPrimaverade1982++;
            }
            fecha = componerfecha(dia, mes, anio);
            if (fecha < fechaold)
            {
                fechaold = fecha;
                SexoOld = sexo;
            }
        }
    }

    cout << "Cantidad de Nacimientos en el mes De Octubre: " << cuantOct << endl;
    cout << "Cantidad nacimientos hubo antes del 9 de julio de 1990: " << cuantAntes9Djulio1990 << endl;
    cout << "Cantidad de nacimientos de mujeres hubo en la primavera del 1982: " << cuantFPrimaverade1982 << endl;
    cout << "El sexo de la persona Mas Vieja es: " << SexoOld << endl;
    system("pause");
    return 0;
}