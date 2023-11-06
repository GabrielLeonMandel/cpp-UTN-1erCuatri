/*Se ingresa un conjunto de val&&es float, cada uno de los cuales representan el sueldo de un empleado,
excepto el último val&& que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e inf&&me:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.*/
#include <iostream>
using namespace std;

int main()
{
    float sueldo;
    int cuantos, cuantos2, cuantos3, cuantos4;
    cuantos = 0;
    cuantos2 = 0;
    cuantos3 = 0;
    cuantos4 = 0;

    while (sueldo > 0)
    {
        cout << "digite el sueldo : " << endl;
        cin >> sueldo;
        if (1520 > sueldo)
        {
            cuantos++;
            cout << cuantos << endl;
        }
        else if ((sueldo >= 1520) && (sueldo < 2780))
        {
            cuantos2++;
            cout << cuantos2 << endl;
        }
        else if ((sueldo >= 2780) && (sueldo < 5999))
        {
            cuantos3++;
            cout << cuantos3 << endl;
        }
        else if (sueldo >= 5999)
        {
            cuantos4++;
            cout << cuantos4 << endl;
        }
    }

    system("pause");
    return 0;
}