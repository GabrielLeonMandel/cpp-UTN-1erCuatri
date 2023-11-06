/*Una empresa lo contrata para construir un sistema que le permita calcular las estadísticas de sus ventas mensuales.
Para ello, los empleados de la empresa ingresan por cada venta:
● Número de factura
● La fecha en formato AAAAMMDD
● Monto total facturado.
El ingreso de datos finaliza con un número de factura negativo.
Se desea obtener:
a. El día en que ocurrió la factura de mayor monto.
b. El número de factura de la factura de menor monto.
c. El promedio de facturación del mes.*/
#include <iostream>
using namespace std;
void descomponerFecha(int fecha, int &dia, int &mes)
{
    dia = (fecha % 100);
    mes = ((fecha / 100) % 100);
    return;
}

int main()
{
    int nrofactura = 1, fechaAAAAMMDD = 0, dia = 0, mes = 0, diaMayorMonto = 0, nroFacturaMenorMonto = 0, cantdias = 0, MontoAcumulado = 0;
    float MontoTotal = 0, mayormonto = -999999999, menormonto = 99999999, promedioDFacturacionMes = 0;

    while (nrofactura >= 0)
    {
        cout << "Digite el nro de Factura" << endl;
        cin >> nrofactura;
        if (nrofactura >= 0)
        {
            cout << "Digite La fecha en formato AAAAMMDD" << endl;
            cin >> fechaAAAAMMDD;
            cout << "Digite el Monto Total Facturado" << endl;
            cin >> MontoTotal;
            MontoAcumulado += MontoTotal;
            cantdias++;
            descomponerFecha(fechaAAAAMMDD, dia, mes);
            if (MontoTotal > mayormonto)
            {
                mayormonto = MontoTotal;
                diaMayorMonto = dia;
            }
            if (MontoTotal < menormonto)
            {
                menormonto = MontoTotal;
                nroFacturaMenorMonto = nrofactura;
            }

            promedioDFacturacionMes = MontoAcumulado / cantdias;
        }
    }
    cout << "EL dia que ocurrio la factura de mayor monto es: " << diaMayorMonto << endl;
    cout << "El nro de la factura de menor monto es: " << nroFacturaMenorMonto << endl;
    cout << "El Promedio de la facturacion del mes es: " << promedioDFacturacionMes << endl;

    return 0;
}
