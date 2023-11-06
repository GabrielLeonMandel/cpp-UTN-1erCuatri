#include <iostream>
using namespace std;

int main () {
 int nro;
 float a,b,c;
 cout<<"digite el numero entero"<<endl;
 cin>>nro;
 a=((nro)/5.0);
 b=(nro%5);
 c=(a/7.0);
 cout<<"a)La quinta parte de dicho valor es: " <<a<<endl;
 cout<<"b)El resto de la division por 5 es: " <<b<<endl;
 cout<<"c)La septima prte del resulatdo del pto a) es: " <<c<<endl;

 return 0;
}