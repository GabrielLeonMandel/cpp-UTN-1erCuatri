#include <iostream>
using namespace std;

int main () {
 int mes,dia,anio,fecha;
 cout << "Digite la fecha en formato AAAAMMDD"<<endl;
 cin >> fecha;
 anio=(fecha/10000);
 dia=(fecha % 100);
 mes=((fecha/100)%100);

 cout << "Dia: "<<dia <<endl<<"Mes: "<<mes<<endl<<"Anio: "<<anio<<endl;

 return 0;
}
