#include <cmath>

namespace Ciencia {
    namespace Fisica {
        const double velocidadLuz = 299792458.0;  // Velocidad de la luz en m/s

        double calcularEnergia(double masa) {
            return masa * pow(velocidadLuz, 2);
        }
    }
}
