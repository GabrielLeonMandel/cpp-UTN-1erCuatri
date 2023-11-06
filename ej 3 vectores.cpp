/*Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes.
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento
homólogo de VEC. Finalmente imprimir ambos vectores a razón de un valor de cada uno por
renglón*/
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int N;
    cout << "Ingrese un valor entero N (< 20): ";
    cin >> N;

    // Validar el valor de N
    if (N >= 20) {
        cout << "El valor de N debe ser menor a 20." << endl;
        return 0;
    }

    int VEC[N];
    int FACT[N];

    cout << "Ingrese los " << N << " elementos del conjunto VEC: ";
    for (int i = 0; i < N; i++) {
        cin >> VEC[i];//le dice que guarde de el indice 0 al N los elementos que digites.
    }

    // Generar el conjunto FACT con los factoriales de los elementos de VEC
    for (int i = 0; i < N; i++) {
        FACT[i] = factorial(VEC[i]);
    }

    // Imprimir VEC y FACT
    cout << "El conjunto VEC es: " << endl;
    for (int i = 0; i < N; i++) {
        cout << VEC[i] << endl;
    }

    cout << "El conjunto FACT, con los factoriales de los elementos de VEC, es: " << endl;
    for (int i = 0; i < N; i++) {
        cout << FACT[i] << endl;
    }

    return 0;
}