#include <iostream>
using namespace std;
int especular(int n, int resultado = 0) {
   if (n == 0) {return resultado;}

    resultado = resultado * 10 + n % 10;

    return especular(n / 10, resultado);
}

int main() {
    int n;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "El numero debe ser positivo." << endl;
        return 0;
    }

    cout << "La imagen especular es: "
         << especular(n) << endl;

    return 0;
}

