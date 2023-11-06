#include <iostream>
using namespace std;
void burbujeoAleLeon(int array[], int largoArray){
    int aux;
    bool ordenado = false;
    for (int i = 1; i < largoArray && !ordenado; i++)
    {
        ordenado = true;
        for (int j = 0; j < largoArray-i; j++)
        {
            if (array[j]>array[j+1])
            {
                aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
                ordenado = false;
            }
            
        }
        
    }
    
}
int main () {
 
 return 0;
}