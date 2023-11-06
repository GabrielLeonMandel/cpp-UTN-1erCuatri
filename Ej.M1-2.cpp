#include <iostream>
using namespace std;
//AAAAMMDD
int main () {
    int mes,dia,anio,fecha;
    cout << "digite el anio AAAA" << endl;
    cin  >> anio;
    cout << "digite el mes MM"<< endl;
    cin >> mes;
    cout << "digite el dia DD"<<endl;
    cin >>dia;
    fecha = (anio*10000) + (mes*100) + dia;
 cout << fecha <<endl;
 return 0;
}