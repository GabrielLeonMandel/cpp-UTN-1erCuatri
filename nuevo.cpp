#include <iostream>
using namespace std;
int EsOctubre(int mes)
{
    int cuantosOct = 0;
    if (mes == 10)
    {
        cuantosOct++;
    }
    return cuantosOct;
}
int EsAntesDe9Julio1990(int dia, int mes, int anio)
{
    int cuantosAntes=0;
    if ((dia < 9 && mes == 7 && anio == 1990) || (anio < 1990) || (mes < 7 && anio == 1990))
    {
        cuantosAntes++;
    }
    return cuantosAntes;
}
int EsPrimaveraD1982(int dia, int mes, int anio, char sexo)
{
    int CuantasPriD1982 = 0;
    if ((sexo == 'F' && anio == 1982 && (mes == 10 || mes == 11)) || (sexo == 'F' && anio == 1982 && mes == 9 && dia >= 21) || (sexo == 'F' && anio == 1982 && mes == 12 && dia <= 20))
    {
        CuantasPriD1982++;
    }
    return CuantasPriD1982;
}
char SexPersonMasVieja(int dia, int mes, int anio, char sexo)
{
    int fecha, fechavieja=0;
    char sexviejo;
    fecha = (anio * 10000) + (mes * 100) + (dia);
    if (fecha > fechavieja)
    {
        fechavieja = fecha;
        sexviejo = sexo;
    }
    return sexviejo;
}

int main()
{
    int dia, mes, anio,cuantOct,cuantAntes9Djulio1990,cuantPrimaverade1982;
    char sexo,SexoOld;
    
    while (dia != 0)
    {
        cout << "Digite Día de nacimiento (2 dig.): " << endl;
        cin >> dia;
        cout << "Digite El mes (2 dig.) De Nacimiento: " << endl;
        cin >> mes;
        cout << "Digite El Año (4 dig.) De Nacimiento: " << endl;
        cin >> anio;
        cout << "Digite El sexo ('M'=masc. 'F'=fem.): " << endl;
        cin >> sexo;
        cuantOct = EsOctubre(mes);
        cuantAntes9Djulio1990 = EsAntesDe9Julio1990(dia, mes, anio);
        cuantPrimaverade1982 = EsPrimaveraD1982(dia, mes, anio, sexo);
        SexoOld = SexPersonMasVieja(dia, mes, anio, sexo);
    }

    cout << "Cantidad de Nacimientos en el mes De Octubre: " << cuantOct << endl;
    cout << "Cantidad nacimientos hubo antes del 9 de julio de 1990: " << cuantAntes9Djulio1990 << endl;
    cout << "Cantidad de nacimientos de mujeres hubo en la primavera del 1982: " << cuantPrimaverade1982 << endl;
    cout << "El sexo de la persona Mas Vieja es: " << SexoOld << endl;
    system("pause");
    return 0;
}