#include <iostream>
using namespace std;
double potencia(double x, int n) {
    // Caso base: cualquier número elevado a 0 es 1
    if (n == 0) {
        return 1;
    }
    
    if (n < 0) {
        return 1 / potencia(x, -n);
    }
    

    double mitad = potencia(x, n / 2);
    

    if (n % 2 == 0) {
        return mitad * mitad;
    } 

    else {
        return x * mitad * mitad;
    }
}

int main() {
    double base = 2.0;
    int exponente = 3;
    
    std::cout << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << std::endl;
    
    return 0;
}
