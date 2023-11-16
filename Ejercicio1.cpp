#include <iostream>
#include <cmath>

#ifdef _WIN32
#include <conio.h>
#else
#include <termios.h>
#include <unistd.h>
#endif

using namespace std;

void pausa() {
#ifdef _WIN32
    cout << "Presiona una tecla para continuar...";
    _getch();
    cout << endl;
#else
    cout << "Presiona una tecla para continuar...";
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~ICANON;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    cout << endl;
#endif

    cin.ignore();  // Limpiar el búfer de entrada
}

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    float division(int a, int b) {
        if (b != 0) {
            return static_cast<float>(a) / b;
        } else {
            cerr << "Error: División por cero." << endl;
            return 0;
        }
    }

    int cuadrado(int a) {
        return a * a;
    }

    float raizCuadrada(int a) {
        if (a >= 0) {
            return sqrt(static_cast<float>(a));
        } else {
            cerr << "Error: No se puede calcular la raíz cuadrada de un número negativo." << endl;
            return 0;
        }
    }
}

int main() {
    int a, b;

    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    cout << "Suma: " << Matematicas::suma(a, b) << endl;
    pausa();

    cout << "Resta: " << Matematicas::resta(a, b) << endl;
    pausa();

    cout << "Multiplicacion: " << Matematicas::multiplicacion(a, b) << endl;
    pausa();

    if (b != 0) {
        cout << "Division: " << Matematicas::division(a, b) << endl;
    } else {
        cerr << "Error: División por cero." << endl;
    }
    pausa();

    cout << "Cuadrado (se usa solo el primer numero): " << Matematicas::cuadrado(a) << endl;
    pausa();

    if (a >= 0) {
        cout << "Raiz Cuadrada (se usa solo el primer numero): " << Matematicas::raizCuadrada(a) << endl;
    } else {
        cerr << "Error: No se puede calcular la raíz cuadrada de un número negativo." << endl;
    }
    pausa();

    return 0;
}
