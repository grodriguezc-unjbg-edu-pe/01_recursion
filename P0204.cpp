#include <iostream>
using namespace std;

int maximo(int A[], int n);
int main() {
    int A[100], n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Cantidad no valida." << endl;
        return 0;
    }

    cout << "Ingrese los elementos del arreglo:" << endl;

    for (int i = 0; i < n; i++) {cout << "A[" << i << "] = "; cin >> A[i];}

    cout << "El elemento maximo es: "
         << maximo(A, n) << endl;
    return 0;
}
int maximo(int A[], int n) {
    if (n == 1) {return A[0];}
    int mayor = maximo(A, n - 1);
    if (A[n - 1] > mayor) {return A[n - 1];} else {return mayor;}
}

