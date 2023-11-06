/*Dado un valor M determinar y emitir un listado con los M primeros múltiplos de 3 que no lo sean de 5,
dentro del conjunto de los números naturales.*/
#include <iostream>
using namespace std;

int main () {
 int ValorM;
 cout<<"Digite un Nro Natural: "<<endl;
 cin>>ValorM;
 for (int i = 0; i < ValorM; i++)
 {
    if ((i%3==0)&&(i%5!=0))
    {
        cout<<i<<endl;
    }
    
 }
 
 system("pause");
 return 0;
}