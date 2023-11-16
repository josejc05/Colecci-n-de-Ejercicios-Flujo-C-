#include <iostream>
#include "fisica.cpp"
#include "biologia.cpp"
#include "quimica.cpp"

using namespace std;
using namespace Ciencia;

int main() {
    Biologia::pausa();

    double masa = 1.0;
    double energia = Fisica::calcularEnergia(masa);
    cout << "Energia (E=mc^2) para una masa de " << masa << " kg: " << energia << " J" << endl;

    Biologia::pausa();
    Biologia::realizarOperacionesBiologia();
    Biologia::pausa();

    Quimica::pausa();
    Quimica::realizarOperacionesQuimica();
    Quimica::pausa();

    return 0;
}
