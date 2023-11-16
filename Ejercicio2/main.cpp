#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

using namespace std;

void pausa() {
    cout << "Presiona una tecla para continuar...";
    cin.get();
    cout << endl;
}

int main() {
    double baseTriangulo, alturaTriangulo, radioCirculo;

    cout << "Ingrese la base del triángulo: ";
    cin >> baseTriangulo;

    cout << "Ingrese la altura del triángulo: ";
    cin >> alturaTriangulo;

    double areaTriangulo = Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
    cout << "Área del triángulo: " << areaTriangulo << endl;
    pausa();

    cout << "Ingrese el radio del círculo: ";
    cin >> radioCirculo;

    double areaCirculo = Geometria::calcularAreaCirculo(radioCirculo);
    cout << "Área del círculo: " << areaCirculo << endl;
    pausa();

    return 0;
}

