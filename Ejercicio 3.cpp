#include <iostream>
#include <cmath>

namespace Geometria {
    class Circulo {
    private:
        double radio;

    public:
        Circulo(double r) : radio(r) {}

        double calcularArea() const {
            return M_PI * radio * radio;
        }

        double calcularPerimetro() const {
            return 2 * M_PI * radio;
        }

        void imprimirResultados() const {
            std::cout << "Perimetro del circulo: " << calcularPerimetro() << std::endl;
            std::cout << "Pulsa una tecla para continuar..." << std::endl;
            std::cin.get(); // Espera a que el usuario presione una tecla
            std::cin.get();
            std::cout << "Area del circulo: " << calcularArea() << std::endl;
            std::cout << "Pulsa una tecla para salir..." << std::endl;
            std::cin.get(); // Espera a que el usuario presione una tecla
        }
    };
}

int main() {
    double radio;
    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> radio;

    Geometria::Circulo circulo(radio);
    circulo.imprimirResultados();

    return 0;
}
