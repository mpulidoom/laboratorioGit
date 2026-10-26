
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    ifstream archivoEntrada("input/archivoEntrada.txt.txt");

    if (!archivoEntrada.is_open()) {
        cout << "Error al abrir el archivo de entrada" << endl;
        return 1;
    }

    ofstream archivoSalida("output/archivoSalida.txt");

    if (!archivoSalida.is_open()) {
        cout << "Error al crear el archivo de salida" << endl;
        return 1;
    }

    cout << "Archivo abierto" << endl;

    string linea;

    while (getline(archivoEntrada, linea)) {
        archivoSalida << linea << endl;
    }

    archivoEntrada.close();
    archivoSalida.close();

    cout << "Archivo copiado correctamente" << endl;

    return 0;
}
