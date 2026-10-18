#include <iostream>
using namespace std;
int serie(int n); 
int main() {
    int n;

    cout << "Ingrese el numero de termino: ";
    cin >> n;

    if (n < 1) {
        cout << "Ingrese un numero positivo." << endl;
    } else {
        cout << "El termino " << n
             << " de la serie es: " << serie(n) << endl;
    }

    return 0;
}
int serie(int n) {
    if (n == 1) {return 4;}
    if (n == 2) {return 6;}
    return serie(n - 1) + serie(n - 2);
}

