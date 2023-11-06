/* Un buque de carga traslada 100 contenedores a tres diferentes puertos del país.
Los puertos se identifican con los números 1, 2 y 3.
De cada contenedor que el buque traslade se registran los siguientes datos:
- Identificación del contenedor
- Peso del contenedor en kg
- Puerto de arribo (un valor de 1 a 3).
Se pide calcular e informar:
1) El peso total que el buque debe trasladar
2) La identificación del contenedor de mayor peso
3) La cantidad de contenedores que debe trasladar a cada puerto*/
#include <iostream>
using namespace std;

int main () {
 int puertos,puerto1=0,puerto2=0,puerto3=0;
 float peso,pesototal=0,pesomayor=0;
 string ident,identmayor;
 for (int i = 1; i <= 100; i++)
 {
    cout<<"Digite La identificacion del contenedor: "<<endl;
    cin>>ident;
    cout<<"Digite El Peso del Contenedor: "<<endl;
    cin>>peso;
    pesototal+=peso;
    if(peso>pesomayor){
        pesomayor=peso;
        identmayor=ident;
    }

    cout<<"Digite El Puerto Donde Arribo 1,2,3: "<<endl;
    cin>>puertos;
    if(puertos==1){
      puerto1++;
    }
    else if(puertos==2){
        puerto2++;
    }
    else{
        puerto3++;
    }
 }
  cout<<"Peso Total: "<<pesototal<<endl<<"identificacio del de mayor peso es: "<<identmayor<<endl<<"Contenendores Puerto 1: "<<puerto1<<endl<<"Contenedores Puerto Puerto2: "<<puerto2<<endl<<"Contenedores Puerto Puerto3: "<<puerto3<<endl;
 
 return 0;
}