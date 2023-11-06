// Dados N y M números naturales, informar su producto por sumasucesivas.
#include <iostream>
using namespace std;

int main()
{
    int N, M, sumasucesiva;

    cout << "Digite El 1er nro Natural: " << endl;
    cin >>M;
    cout<<"Digite El 2do nro Natural"<<endl;
    cin >>N;
    sumasucesiva = 0;
    for (int i = 0; i < N; i++)
    {
        sumasucesiva += M;
    }
    cout << "producto: " << sumasucesiva << endl;
   
    system("pause");

    return 0;
}