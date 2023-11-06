#include <iostream>
using namespace std;

int main()
{
    int i, suma = 0;
    for (i = 1; i <= 100; i++)
    {
        cout << i << endl;
        suma = suma + i;
    }
    cout << "La sumatoria es: " << suma << endl;
    
    system("pause");

    return 0;
}