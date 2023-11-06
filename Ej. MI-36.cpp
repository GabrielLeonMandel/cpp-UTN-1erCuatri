/*Dada la fracción P/Q, para P y Q naturales informar la mayor cantidad de simplificaciones. Desarrolle y
utilice una función que reciba dos números naturales y retorne el menor factor común. Ej: 360/60 = 180/30 = 90/15 =
30/5 = 6/1*/
#include <iostream>
using namespace std;

int mcd(int a, int b) {
    if (b == 0)
        return a;
    return mcd(b, a % b);
}

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}

int main() {
    int P, Q;
    cout << "Introduce el valor de P: ";
    cin >> P;
    cout << "Introduce el valor de Q: ";
    cin >> Q;
    while (mcm(P, Q) != max(P, Q)) {
        int MCM = mcm(P, Q);
        P = MCM / Q;
        Q = MCM / P;
        cout << P << "/" << Q << " = ";
    }
    cout << P << "/" << Q << endl;
    return 0;
}