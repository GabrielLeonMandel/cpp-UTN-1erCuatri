/*Dada una serie de números enteros, informar:
a) su factorial
b) cuantos múltiplos de 3
c) cuantos múltiplos de 5
d) cuantos múltiplos de 3 y de 5
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    int numeros[n];
    int factorial = 1;
    int multiplosDe3 = 0;
    int multiplosDe5 = 0;
    int multiplosDe3y5 = 0;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        factorial *= numeros[i];
        if (numeros[i] % 3 == 0) {
            multiplosDe3++;
        }
        if (numeros[i] % 5 == 0) {
            multiplosDe5++;
        }
        if (numeros[i] % 3 == 0 && numeros[i] % 5 == 0) {
            multiplosDe3y5++;
        }
    }

    cout << "El factorial es: " << factorial << endl;
    cout << "Hay " << multiplosDe3 << " multiplos de 3" << endl;
    cout << "Hay " << multiplosDe5 << " multiplos de 5" << endl;
    cout << "Hay " << multiplosDe3y5 << " multiplos de 3 y de 5" << endl;

    return 0;
}