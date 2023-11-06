#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un valor entero N (< 30): ";
    cin >> N;

    // Validar el valor de N
    if (N >= 30) {
        cout << "El valor de N debe ser menor a 30." << endl;
        return 0;
    }

    int conjuntoUno[N];
    int conjuntoDos[N];
    int conjuntoTres[N * 2];

    cout << "Ingrese los " << N << " elementos del conjunto UNO: ";
    for (int i = 0; i < N; i++) {
        cin >> conjuntoUno[i];
    }

    cout << "Ingrese los " << N << " elementos del conjunto DOS: ";
    for (int i = 0; i < N; i++) {
        cin >> conjuntoDos[i];
    }

    // Generar el conjunto TRES intercalando los elementos
    for (int i = 0; i < N; i++) {
        conjuntoTres[i * 2] = conjuntoUno[i];
        conjuntoTres[i * 2 + 1] = conjuntoDos[i];
    }

    // Imprimir el conjunto TRES
    cout << "El conjunto TRES intercalado es: ";
    for (int i = 0; i < N * 2; i++) {
        cout << conjuntoTres[i] << " ";
    }
    cout << endl;
    return 0;
}