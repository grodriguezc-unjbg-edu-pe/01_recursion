#include <iostream>
using namespace std;

void convertirBinario(int n) {
    if (n < 2) {cout << n; return;}
    convertirBinario(n / 2);
    cout << n % 2;}

int main() {
    int numero;
    cout << "Ingrese un numero en base 10: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Ingrese un numero entero no negativo." << endl;
        return 0;
    }
    cout << "Su equivalente en base 2 es: ";
    convertirBinario(numero);
    cout << endl;
    return 0;
}

