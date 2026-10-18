#include <iostream>
using namespace std;

int buscar(int A[], int n, int x); 
int main() {
    int A[50], n, x, pos;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    if (n < 1 || n > 50) {
        cout << "Cantidad de elementos no valida." << endl;
        return 0;
    }
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {cout << "A[" << i << "] = ";cin >> A[i];}

    cout << "Ingrese el valor que desea buscar: ";
    cin >> x;
    pos = buscar(A, n, x);
    if (pos != -1) {cout << "Valor encontrado en la posicion: " << pos << endl;} 
	else {cout << "El valor no se encuentra en el arreglo." << endl;}
    return 0;
}
int buscar(int A[], int n, int x) {
     if (n == 0) {return -1;}
     if (A[n - 1] == x) {return n - 1;}
     return buscar(A, n - 1, x);
}

