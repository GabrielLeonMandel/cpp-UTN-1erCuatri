#include <iostream>
using namespace std;
struct Autocar
{
    int patente;
    float kilometraje;
    string color;
    string modelo;
};
int main()
{
    int N=0,cantAutos=0,cant10k=0;
    float kilometrajeTotal=0,promedio=0;
    cout<<"Digite la cant de autos a procesar"<<endl;
    cin>>N;
    if (N>5000)
    {
        return 0;
    }
    
    Autocar Autos[N];

    for (int i = 0; i < N; i++)
    {
        cout<<"Digite La Patente del Auto o 0 para cerrar la carga"<<endl;
        cin>>Autos[i].patente;
        if (Autos[i].patente == 0)
        {
            break;
        }
        cout<<"Digite El Kilometraje del auto: "<<endl;
        cin>>Autos[i].kilometraje;
        kilometrajeTotal+=Autos[i].kilometraje;
        if (Autos[i].kilometraje<10000)
        {
            cant10k++;
        }
        cout<<"Digite El Modelo Del Auto: "<<endl;
        cin>>Autos[i].modelo;
        cout<<"Digite El Color Del Auto: "<<endl;
        cin>>Autos[i].color;
        cantAutos++;
    }

    promedio=kilometrajeTotal/cantAutos;

    cout<<"Lista de autos mayor a 100000km"<<endl;

    for (int i = 0; i < cantAutos; i++)
    {
        if (Autos[i].kilometraje>100000)
        {
            cout<<"El Modelo es: "<<Autos[i].modelo<<"\t"<<"El Kilemtraje es: "<<Autos[i].kilometraje<<"\t"<<"El Color es:"<<Autos[i].color<<"\t"<<"La Patente es:"<<Autos[i].patente<<endl;
        }
        
    }

    cout<<"Lista de Autos Menor a 100000km"<<endl;

    for (int i = 0; i < cantAutos; i++)
    {
        if (Autos[i].kilometraje<100000)
        {
            cout<<"El Modelo es: "<<Autos[i].modelo<<"\t"<<"El Kilemtraje es: "<<Autos[i].kilometraje<<"\t"<<"El Color es:"<<Autos[i].color<<"\t"<<"La Patente es:"<<Autos[i].patente<<endl;
        }
        
    }

   cout<<"el promedio es de "<<promedio<<"Km"<<endl;
   cout<<"La cant de autos es de "<<cantAutos<<endl;
   cout<<"cant Autos Menos de 10000km es de: "<<cant10k<<endl;
   
    return 0;
}