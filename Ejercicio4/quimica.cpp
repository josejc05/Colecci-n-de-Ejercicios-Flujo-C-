#include <iostream>
#include "ciencia.cpp"

namespace Ciencia {
    namespace Quimica {
        void realizarOperacionesQuimica() {
            // Operaciones relacionadas con Química
            // ...
        }

        void pausa() {
            std::cout << "Presiona Enter para continuar...";
            std::cin.ignore();
            std::cin.get();
            std::cout << std::endl;
        }
    }
}
