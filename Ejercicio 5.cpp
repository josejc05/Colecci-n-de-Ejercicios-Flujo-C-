#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

// Función para esperar a que el usuario presione una tecla
void esperarTecla() {
    cout << "Pulsa una tecla para continuar..." << endl;
    cin.get(); // Espera a que el usuario presione una tecla
}

int main() {
    // Usamos un nombre diferente para evitar conflicto con el nombre de la clase vector
    vector<int> miVector;

    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);

    cout << "Elementos del vector: " << endl;
    for (int elemento : miVector) {
        cout << elemento << endl;
    }

    esperarTecla(); // Espera a que el usuario presione una tecla

    map<int, string> miMapa;

    miMapa[1] = "uno";
    miMapa[2] = "dos";
    miMapa[3] = "tres";

    cout << "Elementos del mapa: " << endl;
    for (const auto& par : miMapa) {
        cout << par.first << " -> " << par.second << endl;
    }

    esperarTecla(); // Espera a que el usuario presione una tecla
    cin.get();
    set<int> miSet;

    miSet.insert(10);
    miSet.insert(20);
    miSet.insert(30);

    cout << "Elementos del set: " << endl;
    for (int elemento : miSet) {
        cout << elemento << " ";
    }
    cout << endl;
    cin.get();
    esperarTecla(); // Espera a que el usuario presione una tecla

    return 0;
}

