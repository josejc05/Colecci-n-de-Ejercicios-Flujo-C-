// main.cpp
#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

using namespace std;

void pausa() {
    cout << "Presiona Enter para continuar...";
    cin.ignore();
    cin.get();
}

int main() {
    double baseTriangulo, alturaTriangulo, radioCirculo;

    cout << "Ingrese la base del triángulo: ";
    cin >> baseTriangulo;
    pausa();

    cout << "Ingrese la altura del triángulo: ";
    cin >> alturaTriangulo;
    pausa();

    double areaTriangulo = Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
    cout << "Área del triángulo: " << areaTriangulo << endl;
    pausa();

    cout << "Ingrese el radio del círculo: ";
    cin >> radioCirculo;
    pausa();

    double areaCirculo = Geometria::calcularAreaCirculo(radioCirculo);
    cout << "Área del círculo: " << areaCirculo << endl;
    pausa();

    return 0;
}
